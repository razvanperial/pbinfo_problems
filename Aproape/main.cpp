#include <bits/stdc++.h>

using namespace std;
ifstream in("aproape.in");
ofstream out("aproape.out");
int r[9];
int main()
{
    int n,m,v,c=0,i,l,cop,k=0;
    in>>v>>n;
    cop=n;
    while(cop)
    {
        cop/=10;
        c++;
    }
    if(v==1)
    {
        if(n)
            out<<c;
        else
            out<<1;
    }
    else if (v==2)
    {
        if(n!=1)
        {
            k=0;
            while(n/10)
            {
                if(n%10<9 && n%10>0)
                    k+=2;
                else
                    k++;
                n/=10;
            }
            if(n>1 && n<9)
                k+=2;
            else
                k++;
            out<<k;
        }
        else
            out<<2;
    }
    else
    {
        int s=0,x;
        cop=n;
        l=1;
        k=1;
        for(i=0; i<=9; i++)
            if(i>0 && i<9)
                r[i]=2;
            else
                r[i]=1;
        while(cop/10)
        {
            s+=r[cop%10];
            cop/=10;
        }
        if(cop>1 && cop<9)
            s+=2;
        else
            s++;
        cout<<s<<" ";

    }
    return 0;
}
