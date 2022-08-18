#include <bits/stdc++.h>

using namespace std;
ifstream in("pozitie.in");
ofstream out("pozitie.out");
int main()
{   int  n,x,c,k=1;
    in>>n>>c;
    n--;
    while(n--)
    {
        in>>x;
        if(x<c)
            k++;
    }
    out<<k;
    return 0;
}
