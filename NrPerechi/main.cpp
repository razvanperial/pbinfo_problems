#include <iostream>

using namespace std;

int main()
{   int n,x;
    cin>>n;
    while(n--){
        cin>>x;
        for(i=2;i*i<=x && x>1;i++){
            if(x%i==0){
                k=0;
                while(x%i==0){
                    x/=i;
                    k++;
                }

            }
        }
    }
    return 0;
}
