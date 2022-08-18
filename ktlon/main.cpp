#include <bits/stdc++.h>

using namespace std;
ifstream fin("ktlon.in");
ofstream fout("ktlon.out");
long long n,c,k,i;
long long f[20000],r[20000];
int main()
{   fin>>c>>n>>k;
    if(c == 1){
        long long maxf=0, maxr=0, x, ans=0;
        while(k--){
            maxf = 0;
            maxr = 0;
            for(i=1; i<=n; i++){
                fin>>x;
                maxf=max(maxf,x);
            }
            for(i=1; i<=n; i++){
                fin>>x;
                maxr=max(maxr,x);
            }
            if(maxr > maxf){
                ans++;
            }
        }
        fout<<ans;
    }
    else{
        long long str=0,stl=0,maxf,maxr;
        while(k--){
            maxf=0;
            maxr=0;
            for(i=1;i<=n;i++){
                fin>>f[i];
                maxf=max(maxf,f[i]);
            }
            sort(f+1,f+n+1);
            for(i=1;i<=n;i++){
                fin>>r[i];
                maxr=max(maxr,r[i]);
            }
            sort(r+1,r+n+1);
            if(maxr>maxf){
                i=n;
                while(r[i]>maxf){
                    str+=r[i]-f[i];
                    i--;
                }
            }
            else{
                i=n;
                while(f[i]>maxr){
                    stl+=f[i]-r[i];
                    i--;
                }
            }
        }
        fout<<max(stl,str);
    }
    return 0;
}
