// ArraySum.cpp
#include <iostream>
using namespace std;

int ArraySum(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += a[i];
	}
	return sum;
}

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	cout << ArraySum(a, n) << endl;


	return 0;
}
















