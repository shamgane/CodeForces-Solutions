#include<iostream>
#include <cmath>
using namespace std;
#define MAX 1000000000 
 
int main()
{
    long long int n,m,a, greaterside, shorterside,temp,temp2;
    cin >> n>>m>>a;
    if (n < 1 || m<1 || a>MAX)
    {
        cout << "0";
        return 0;
    }
    if (n>=m)
    {
        greaterside = n;
        shorterside = m;
    }
    else
    {
        greaterside = m;
        shorterside = n;
    }
    if (greaterside%a == 0)
    {
        temp = greaterside/a;
    }
    else
    {
        temp = int(floor(double(greaterside)/a)) + 1;
    }
    if (shorterside<=a)
    {
        cout<<temp;
        return 0;
    }
    if(shorterside>a)
    {
        if (shorterside%a == 0)
        {
            temp2 = shorterside/a;
        }
        else
        {
            temp2 = int(floor(double(shorterside)/a)) + 1;
        }   
        long long int outp = temp*temp2;
        cout<<outp;
    }
    return 0;
}
