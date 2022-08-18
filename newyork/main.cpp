#include <bits/stdc++.h>

using namespace std;
ifstream in("nyk.in");
ofstream out("nyk.out");
bool prim(int x)
{
    int ok=1,i;
    for(i=2;i*i<=x && ok;i++)
        if(x%i==0)
            ok=0;
    return ok;
}
int main()
{   int n,c,x1,x2,cmax=2,;
    for(i=1;i<=n;i++)
    {
        in>>c>>x1>>x2;
        while(x2)
        {
            r=x1%x2;
            x1=x2;
            x2=r;
        }
        mini=r;
        x1=x2;
        while(c--)
        {
            in>>x2;
            if(x2!=r)
            {

            }
        }
    }
    return 0;
}
