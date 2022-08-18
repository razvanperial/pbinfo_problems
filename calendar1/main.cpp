#include <iostream>

using namespace std;

int main()
{   int z,l,a;
    cin>>z>>l>>a;
    if(z<=27)
        cout<<z+1<<" "<<l<<" "<<a;
    else{
        if(z==28 && l==2)
            if((a%4==0 && a%100!=0) || a%400 ==0)
                cout<<29<<" "<<2<<" "<<a;
            else
                cout<<1<<" "<<3<<" "<<a;
        else
            if(z<30)
                cout<<z+1<<" "<<l<<" "<<a;
            else{
                if(l==1 || l==3 || l==5 || l==7 || l==8 || l==10){
                   if(z==31)
                        cout<<1<<" "<<l+1<<" "<<a;
                   else
                        cout<<z+1<<" "<<l<<" "<<a;
                }
                else if(l!=12)
                    if(z==30)
                        cout<<1<<" "<<l+1<<" "<<a;
                    else
                        cout<<z+1<<" "<<l<<" "<<a;
                else
                    if(z==31)
                        cout<<1<<" "<<1<<" "<<a+1;
                    else
                        cout<<z+1<<" "<<l<<" "<<a;
            }
    }
    return 0;
}

