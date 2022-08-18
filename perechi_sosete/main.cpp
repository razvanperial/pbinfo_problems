#include <iostream>

using namespace std;
int v[100],n,x,k=0;
int main()
{   cin>>n;
    while(n--){
        cin>>x;
        v[x]++;
    }
    for(int i=1; i<=100; i++){
        k+=v[i]/2;
    }
    cout<<k;
    return 0;
}
