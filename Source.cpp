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
	int a, b;
	cin >> a >> b;
	if (a + b == 3) {
		cout << 3 << endl;
	}
	else if(a+b == 4){
		cout << 2 << endl;
	}
	else {
		cout << 1 << endl;
	}
	return 0;
}