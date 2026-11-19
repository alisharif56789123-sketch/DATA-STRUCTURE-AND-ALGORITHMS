

#include <iostream>
using namespace std;

long long mults = 0;
long long calls = 0;
long long factorialiter(int n) {
    long long result=1;
    calls++;
    for (int i = 2;i <= n;i++) {
        result *= i;
        mults++;
    }
    return result;
}

long long factorialrec(int n) {
    calls++;
    if (n == 0)return 1;
    mults++;
    return n * factorialrec(n - 1);
}
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    calls = 0;
    mults = 0;
    long long f1 = factorialiter(n);
    cout << "result=" << f1 << " ,calls=" << calls << ", mults =" << mults << endl;
    calls = 0;
    mults = 0;
    long long f2 = factorialrec(n);
    cout << "result=" << f2 << " ,calls=" << calls << ", mults =" << mults << endl;
    return 0;
}

