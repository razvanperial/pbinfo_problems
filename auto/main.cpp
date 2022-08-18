#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   int n,t,v,tt=0;
    float d=0, vm;
    cin>>n;
    while(n--){
        cin>>t>>v;
        d+=t*v;
        tt+=t;
    }
    cout<<d<<" "<<fixed<<setprecision(2)<<d/tt;
    return 0;
}
