
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a, b, c, n, d;
    int cont = 0;
    
    cin >> a >> b >> c >> n >> d;
    cont = d;
    
    if(a == 1 || b == 1 || c == 1 || n == 1)
    {
        cout << d << endl;
    }
    else
    {
        for(int i = 1; i <= d; i++)
        {
            if((i%a != 0) && (i%b != 0) && (i%c != 0) && (i%n != 0))
                cont--;
        }
        cout << cont << endl;
    }
    
}