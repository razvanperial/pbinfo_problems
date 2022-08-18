#include <iostream>
using namespace std;
int main()
{
	int n,i,j,a[25][25],val = 1,m;
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
    	{
            a[i][j]=val*val;
        	val+=2;
    	}
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
        	cout<<a[i][j]<<" ";
    	cout<<'\n';
    }
	return 0;
}

