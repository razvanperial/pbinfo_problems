#include <iostream>

using namespace std;

int main()
{   int n,d,dmax=0,i,j,nr;
    cin>>n;
    for(i=1;i<=n;i++){
        d=0;
        for(j=1;j*j<=i;j++){
            if(i%j==0)
                if(i/j==j)
                    d++;
                else
                    d+=2;
        }
        if(d>dmax){
            nr=i;
            dmax=d;
        }
    }
    cout<<nr;
    return 0;
}
