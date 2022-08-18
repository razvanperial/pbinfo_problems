#include <bits/stdc++.h>

using namespace std;
ifstream fin("qtsume.in");
ofstream fout("qtsume.out");
long long v[100005],s1[100005],s2[100005];
long long n,q,a,b,s,i,r=1;
int main()
{   fin>>n;
    s2[0]=0;
    for(i=1; i<=n; i++){
        fin>>v[i];
        s2[i]=s2[i-1]+v[i];
        s1[i]=s1[i-1]+v[i]*r;
        r++;
    }
    fin>>q;
    while(q--){
        s=0;
        fin>>a>>b;
        s+=s1[b]-s1[a-1];
        s-=(s2[b]-s2[a-1])*(a-1);
        fout<<s<<'\n';
    }
    return 0;
}
