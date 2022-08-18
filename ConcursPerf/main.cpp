#include <bits/stdc++.h>

using namespace std;
long long t,n,p,s,u,g;
int main()
{   cin>>t;
    while(t--){
        u=0;
        g=0;
        cin>>n>>p;
        while(n--){
            cin>>s;
            if(s>=p/2)
                u++;
            if(s<=p/10)
                g++;
        }
        if(u == 1 && g == 2)
            cout<<"da"<<'\n';
        else
            cout<<"nu"<<'\n';
    }
    return 0;
}
