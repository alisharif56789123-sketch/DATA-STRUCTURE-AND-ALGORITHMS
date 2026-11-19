

#include <iostream>
using namespace std;
long long calls = 0;
long long ops = 0;
long long  sumtoiter(int n) {
   
    calls++;
    long long result = 0;
    for (int i = 0;i <= n;i++) {
        result =result+ i;
        ops++;
       
    }
    return result;
}
    long long sumtorec(int n) {
        if (n == 0)return 0;
        ops++;
        return n + sumtorec(n - 1);
    }



    int main()
    {
        int n;
        cout << "enter n:";
        cin >> n;
        ops = 0;
        long long s1 = sumtoiter(n);
        
        cout << "iter=" << s1 << ",additional= " << ops << endl;
        ops = 0;
        long long s2 = sumtorec(n);
        cout << "rec=" << s2 << ",additional= " << ops <<"calls="<<calls<< endl;
        return 0;
    }

