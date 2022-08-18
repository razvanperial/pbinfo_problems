#include <bits/stdc++.h>

using namespace std;
ifstream in("bookface.in");
ofstream out("bookface.out");
bool ciur[1000005];

long long lgput(long long a,long long n)
{
    long long rez=1;
    while(n>0){
        if(n%2==1){
            rez=(rez*a);
        }
        a=(a*a);
        n=n/2;
    }
    return rez;
}
long long v[1000000];
int main()
{
    long long n,x,s,i,j,k,l;
    in>>n;
    ciur[0]=ciur[1]=1;
    l=1;
    for(i=2;i<=1000000;i++)
        if(ciur[i]==0){
            v[l]=i;
            l++;
            for(j=2;j<=1000000/i;j++)
                ciur[i*j]=1;
        }
    while(n--)
    {
        in>>x;
        s=1;
        i=1;
        while(1LL*v[i]*v[i]<=x){
            if(x%v[i]==0){
                k=0;
                while(x%v[i]==0){
                    k++;
                    x/=v[i];
                }
                s*=(lgput(v[i],k*2+1)-1)/(v[i]-1);
            }
            i++;
        }
           if(x>1)
        {
            s*=(lgput(x,3)-1)/(x-1);
        }
        out<<s<<'\n';
    }
    return 0;
}
