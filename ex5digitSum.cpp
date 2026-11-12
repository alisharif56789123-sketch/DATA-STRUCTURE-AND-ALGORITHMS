

#include <iostream>
using namespace std;

int digitsum(int n) {
	int sum = 0;
	while (n > 0) {
		sum += n % 10;
			n /= 10;
	}
	return sum;
}

int main()
{
	int n;
	cout << "Enter n:";
	cin >> n;
	cout << "Sum of digits=" << digitsum(n) << endl;
	return 0;
}

