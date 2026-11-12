

#include <iostream>
using namespace std;

int sumbetween(int a, int b) {
	int result = 0;
	for (int i = a;i <= b;i++) {
		result += i;
	}
	return result;

}

int main()
{
	int a, b;
	cout << "two numbers and I will calculat the sum between them :";
	cin >> a >> b;
		cout << "the result =" << sumbetween(a,b) << endl;

	
 
}

