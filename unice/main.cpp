#include <bits/stdc++.h>

using namespace std;
ifstream fin("unice.in");
ofstream fout("unice.out");
int v[100],n,x;
int main()
{   fin>>n;
    while(n--){
        fin>>x;
        v[x]++;
    }
    for(int i=0; i<=99; i++){
        if(v[i] == 1)
            fout<<i<<" ";
    }
    return 0;
}
