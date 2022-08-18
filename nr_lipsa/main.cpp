#include <bits/stdc++.h>

using namespace std;
ifstream fin("nrlipsa.in");
ofstream fout("nrlipsa.out");
int v[1000],n,i,x,y;
int main()
{
    while(fin>>n){
        if(n/100<10 && n/100>0)
            v[n]++;

    }
    i=999;
    int ok=2;
    while(ok && i>99){
        if(!v[i]){
            if(ok==2){
                ok=1;
                x=i;
            }
            else{
                ok=0;
                y=i;
            }
        }
    i--;
    }
    if(ok)
        fout<<"NU";
    else
        fout<<x<<" "<<y;
    return 0;
}
