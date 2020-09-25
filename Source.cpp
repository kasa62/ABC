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
#include <climits>
#define rep(i,n) for (int i=0;i<(n);i++)

using namespace std;

int main() {
	int N, W;
	cin >> N >> W;
	vector<int> v(N);
	vector<int> w(N);
	for (int i = 0;i < N;i++) {
		cin >> v[i] >> w[i];
	}
	
	vector<vector<int>> dp(N + 1, vector<int>(W + 1));
	for (int i = 0;i <= W;i++) {
		dp[0][i] = 0;
		//cout << dp[0][i] << ",";
	}
	//cout << endl;

	for (int i = 0;i < N;i++) {
		for (int j = 0;j <= W;j++) {
			if (j >= w[i])dp[i + 1][j] = max(dp[i][j - w[i]] + v[i], dp[i][j]);
			else dp[i + 1][j] = dp[i][j];
			//cout << dp[i + 1][j] << ",";
		}
		//cout << endl;
	}

	cout << dp[N][W] << endl;
	return 0;
}
