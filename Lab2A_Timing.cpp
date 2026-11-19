

#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

long long sumiter(long long n) {
    long long total = 0;
    for (int i = 1;i <= n;i++) {
        total += i;

    }
    return total;
}
long long sumrec(long long n) {
    if (n == 0)return 0;
    return n + sumrec(n - 1);
}


int main()
{
   long long n;
    char version;
    cout << "Enter n:";
    cin >> n;
    cout << "Version (i = iterative, r = recursive):";
    cin >> version;

    auto start = steady_clock::now();
    long long result;
    if (version == 'i') result = sumiter(n);
    else result = sumrec(n);

    auto stop= steady_clock::now();
    auto ms = duration_cast<milliseconds>(stop - start).count();
    cout << "sum=" << result << endl;
    cout << "time=" << ms << "ms" << endl;
    return 0;


}

