// buttons.cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long n;
    cin >> n;

    // long long sum1 = (n * (n + 1) * (n + 1)) / 2;
    // long long sum2 = (n * (n + 1) * (2 * n + 1)) / 6;
      cout << (n - 1) * n * (n + 1) / 6 + n << endl;

    
}