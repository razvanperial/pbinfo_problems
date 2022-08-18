#include <fstream>
#pragma optimize( "", off )
#pragma GCC optimize ("O3")
#pragma GCC optimization ("O3")
using namespace std;
ifstream in("gcd.in");
ofstream out("gcd.out");
struct ura
{
    bool a,b;
};
ura v[1000001];
int main()
{
    int n,i,nr;
    in>>n;
    for(i=1; i<=n; i++)
    {
        in>>nr;
        v[nr].a=1;
    }
    for(i=1; i<=n; i++)
    {
        in>>nr;
        v[nr].b=1;
    }
    int j;
    bool ok=0,okk=0;
    for(i=1000001; i>=1; i--)
    {
        ok=0;
        okk=0;
        for(j=i; j<=1000001; j+=i)
        {
            if(v[j].a==1)
            {
                if(okk==1)
                {
                    out<<i;
                    return 0;
                }
                ok=1;
            }
            if(v[j].b==1)
            {
                if(ok==1)
                {
                    out<<i;
                    return 0;
                }
                okk=1;
            }
        }
    }
    return 0;
}
#pragma optimize( "", on )
