#include <bits/stdc++.h>

using namespace std;
ifstream in("pozitiex.in");
ofstream out("pozitiex.out");
int main()
{   int  n,x,c,k=1;
    in>>c>>n;
    while(n--)
    {
        in>>x;
        if(x==c)
            ok=1;
        if(x<c)
            k++;
    }
    if(ok)
    out<<k;
    else
        out<<"NU EXISTA";
    return 0;
}
