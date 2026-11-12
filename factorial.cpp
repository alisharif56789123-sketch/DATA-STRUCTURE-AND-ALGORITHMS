
#include <iostream>
using namespace  std;
long long  factorialrec(int n) {
	if (n == 1) return 1;
	return n * factorialrec(n - 1);
}
long long  factorialiter(int n) {
	long long result = 1;
	for (int i = 1;i <= n;i++) {
		result *= i;
	}
	return result;
}

int main()
{
	int n;
	cout << "Enter n:";
	cin >> n;
	cout << "recursive factorial :" << factorialrec(n) << endl; ;
	cout << "iterative factorial :" << factorialiter(n) << endl;
	return 0;


}

