#include <iostream>
using namespace std;

int main()
{
    int n, x;
    int y= 0, c = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if(x == -1)
        {
            if(y > 0)
                y--;
            else
                c++;
        }
        else
            y =y+x;
    }

    cout << c << endl;
    
}