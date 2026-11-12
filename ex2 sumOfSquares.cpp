

#include <iostream>
using namespace std;

int sumofsquares(int n) {
	int result = 0;
	for (int i = 0;i <= n;i++) {
		result += i * i;
	}
	return result;
}
int sumofodd(int n) {
	int result = 0;
	for (int i = 0;i <= n;i++) {
		if (i % 2 != 0) result += i;
	}
	return result;
}
int sumofeven(int n) {
	int result = 0;
	for (int i = 0;i <= n;i++) {
		if (i % 2 == 0) result += i;
	}
	return result;
}

int main()
{
	int n;
	cout << "Enter n:";
	cin >> n;
	cout << "Sum of squares numbers (0-"<<n<<") =" <<   sumofsquares(n) << endl;
	cout << "sum of even numbers (0-" << n << ") =" << sumofeven(n) << endl;
	cout << "Sum of odd numbers (0-" << n << ") =" << sumofodd(n) << endl;
	return 0;
 
}

