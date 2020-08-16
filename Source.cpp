#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <vector>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <map>
#include <queue>
#define rep(i,n) for (int i=0;i<(n);i++)

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> p(n+1);
	vector<int> c(n+1);
	for (int i = 1;i <= n;i++) {
		cin >> p[i];
	}
	for (int i = 1;i <= n;i++) {
		cin >> c[i];
	}

	vector<int> junkan(n + 1);
	long long max = -10000000000;
	vector<long long> maxs(n + 1);

	for (int i = 1;i < n;i++) {
		maxs[i] = max;
	}

	int sikou, flag = 0;
	int nokori, bai;
	if (n > k) {
		sikou = k;
	}
	else {
		sikou = n;
		flag = 1;
	}

	for(int i = 1;i <= n;i++) {
		int next = p[i];
		long long score = 0;
		int flag_j = 0;
		for (int j = 1;j <= sikou;j++) {
			if (junkan[next] == i) {
				flag_j = j - 1;
				break;
			}
			else {
				junkan[j] = i;
			}
			score += c[next];
			next = p[next];
			if (score > max) {
				max = score;				
			}
		}

		if (flag_j == 0) {
			flag_j = sikou;
		}

		if (flag == 1) {
			long long tmp = score * (k / flag_j);
			int tmp_next = next;
			if (tmp > max) {
				max = tmp;
			}
			for (int a = 1;a <= k % flag_j;a++) {
				tmp += c[tmp_next];
				tmp_next = p[tmp_next];
				if (tmp > max) {
					max = tmp;
				}
			}
		}
	}


	cout << max << endl;
	return 0;
}