

#include <iostream>
using namespace std;

int sumiter(int n) {
	
	
	int sum = 0;
	for (int i = 0;i <= n;i++) {
		sum += i;
	}
	return sum;
}
int sumrec(int n) {
	if (n == 0) return 0;
	return n + sumrec(n - 1);
}

int main()
{
	int n;
	cin >> n;
	int sumi = sumiter(n);
	int sumr = sumrec(n);
	cout << "sum iterative=" << sumi << endl;
	cout << "avg iter =" << (double)sumi / n << endl;
	cout << "sum rec=" << sumr << endl;
	cout << "avg rec =" << (double)sumr / n << endl;
	return 0;
}

