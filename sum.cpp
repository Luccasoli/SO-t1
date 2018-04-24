#include <bits/stdc++.h>
using namespace std;

#define VALUE 10000

int sum() {
	int r, i, sum;
	srand(time(NULL));
	r = (rand() % VALUE) + 1;
	cout << "random = " << r << endl;
	sum = 0;
	for(i = 1; i <= r; i++) {
		sum += i;
	}
	return sum;
}