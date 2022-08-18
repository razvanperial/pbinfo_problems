#include <iostream>

using namespace std;

int main()
{   float x;
    long long t,y,k=0;
    cin>>x>>t>>y;
    while(x>y)
    {
        x-=x/4;
        k+=t;
    }
    cout<<k;
    return 0;
}
