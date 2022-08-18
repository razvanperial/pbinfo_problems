#include <bits/stdc++.h>

using namespace std;
ifstream fin("ciffrecv.in");
ofstream fout("ciffrecv.out");
int v[10],n;
int main()
{
    while(fin>>n){
        if(n == 2){
            v[2]++;
        }
        if (n == 3){
            v[3]++;
        }
        if (n == 5){
            v[5]++;
        }
        if (n == 7){
            v[7]++;
        }
        cout<<n<<" "<<v[n]<<'\n';
    }
    if(v[7])
        fout<<7<<" "<<v[7];
    else if(v[5])
        fout<<5<<" "<<v[5];
    else if(v[3])
        fout<<3<<" "<<v[3];
    else if(v[2])
        fout<<2<<" "<<v[2];
    return 0;
}
