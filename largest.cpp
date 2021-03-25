#include <iostream>
using namespace std;
int main ()
{
    int x,y,z;
    cin>>x>>y>>z;
    if (x>y){
        if(z>x){
            cout<<z<<" is largest";
        }else{
            cout<<x<<" is largest";
        }
    }else{
        if (y>z){
            cout<<y<<" is largest";
        }else{
            cout<<z<<" is largest";
        }
    }
 return 0;
} 
