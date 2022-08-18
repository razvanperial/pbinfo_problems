#include <bits/stdc++.h>

using namespace std;
ifstream fin("amprenta.in");
ofstream fout("amprenta.out");
int main()
{   long long n,c,aux,s1,s2;
    bool ok=true;
    fin>>c;
    if(c==1){
        fin>>n;
        while(n>9){
            aux = n;
            s1=0;
            s2=0;
            while(aux){
                if(ok){
                    s1+=aux%10;
                    ok=false;
                }
                else{
                    s2+=aux%10;
                    ok=true;
                }
                aux/=10;
            }
            n = abs(s1-s2);
        }
        if(n>=6)
            fout<<11-n;
        else
            fout<<n;
    }
    return 0;
}
