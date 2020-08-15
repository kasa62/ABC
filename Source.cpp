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

//���[�N���b�h�̌ݏ��@
//p,q�̍ő���񐔂�Ԃ�
int gcd(int p, int q) {
	if (p % q == 0) return q;
	return gcd(q, p % q);
}

//�ŏ����{����Ԃ�
long long lcm(long long a, long long b) {
	return a * b / gcd(a, b);
}

int main() {
	long long a, b;
	cin >> a >> b;

	cout << lcm(a, b) << endl;

	return 0;
}