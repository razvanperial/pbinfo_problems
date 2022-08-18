#include <bits/stdc++.h>

using namespace std;
ifstream fin("sir.in");
ofstream fout("sir.out");
long long n,x,sum=0,s1=0,st=1,dr,ok=1,i,j,mid,val;
float suma;
long long v[100005],s[100005];

long long cautbin(long long s[], long long inc, long long sf){
    mid = (inc+sf)/2;
    if(inc > sf)
        return val;
    if(s[mid]==sum/2){
        return mid;
    }
    if(s[mid]<sum/2)
        return cautbin(s, mid+1, sf);
    else{
        val=mid;
        return cautbin(s, inc, mid-1);
    }
}
int main()
{
    fin>>n;
    s[0]=0;
    for(i=1; i<=n; i++){
        fin>>v[i];
        s[i]=s[i-1]+v[i];
        sum+=v[i];
    }
    if(sum%2)
        sum++;
    val=cautbin(s, 1, n);
    if(s[val]==sum/2 || s[val]-(sum-s[val])<=v[1]){
        for(j=1; j<= val; j++)
            fout<<"+";
        for(j=val+1; j<=n; j++)
            fout<<"-";
    }
    else{

    }
    return 0;
}
