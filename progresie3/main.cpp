#include <bits/stdc++.h>

using namespace std;
ifstream fin("progresie3.in");
ofstream fout("progresie3.out");
long long x, v[1005],min1=INT_MAX,min2=INT_MAX,maxi=0;
int main()
{   while(fin>>x){
        v[x]++;
        if(x<min1){
            min2 = min1;
            min1 = x;
        }
        else if (x<min2 && x!=min1)
            min2=x;
        maxi=max(maxi,x);
    }
    int dif = min2-min1, ok=1,i;
    i=min2+dif;
    int val=i;
    for(i;i<=maxi && ok;i++){
        if(v[i] && i!=val){
            ok=0;
        }
        if(!v[i] && i==val){
            ok=0;
        }
        if(i+1==val+dif)
            val+=dif;
    }
    if(ok)
        fout<<dif;
    else
        fout<<"NU";
    return 0;
}
