#include <iostream>
#include <algorithm>
using namespace std;

int a[11],i,n,cate,s,k,s1,s2,s3;

void bkt(int k=0)
{
    if(k==n)
    {
        if(s1==0||s2==0||s3==0)
            return;
        if(s1==s2&&s2==s3)
            cate++;
        return;
    }
    k++;
    bkt(k);
    s1+=a[k];
    bkt(k);
    s1-=a[k];
    s2+=a[k];
    bkt(k);
    s2-=a[k];
    s3+=a[k];
    bkt(k);
    s3-=a[k];
}

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    bkt();
    cout<<cate/6;
    return 0;
}
