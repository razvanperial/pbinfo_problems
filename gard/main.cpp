#include <iostream>

using namespace std;
int v[1005];
int main()
{   int n,maxi=0,s=0,i;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>v[i];
        maxi=max(maxi,v[i]);
    }
    for(i=1;i<=n;i++){
        s+=maxi-v[i];
    }
    cout<<s;
    return 0;
}
