#include <bits/stdc++.h>

using namespace std;
ifstream fin("toate.in");
ofstream fout("toate.out");
int main()
{   long long n,x,nr,maxi=0,p;
    fin>>n;
    while(n--){
        nr=0;
        p=1;
        fin>>x;
        while(x){
            if(x%10!=9){
                nr=nr+x%10*p;
                p*=10;
            }
            x/=10;
        }
        maxi=max(maxi,nr);
    }
    fout<<maxi;
    return 0;
}
