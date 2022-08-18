#include <bits/stdc++.h>

using namespace std;
ifstream fin("robot.in");
ofstream fout("robot.out");
long long  c,n,x,y,i,k=0;
long long v[500005], a[100][100];
int main(){
    fin>>c>>n;
    for(i=1;i<=n;i++){
        fin>>x>>y;
        if(x>y)
            swap(x,y);
        if(a[x][y] == 0){
            k++;
            a[x][y]=k;
            v[k]++;
        }
        else
            v[a[x][y]]++;
    }
    if(c==1){
        fout<<k;
    }
    else{
        int mini = INT_MAX;
        for(i=1;i<=k;i++){
            if(v[i]<mini)
                mini=v[i];
            cout<<i<<" "<<v[i]<<'\n';
        }
        fout<<mini;
    }
    return 0;
}
