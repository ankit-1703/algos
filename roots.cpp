#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int a,b,c,x1,x2,d;
    float rp,ip;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if (d>=0){
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        cout<<x1<<endl<<x2;
    }else{
        rp=-b/(2*a);
        ip=(sqrt(-d))/(2*a);
        cout<<rp<<"+i"<<ip<< endl;
        cout<<rp<<"-i"<<ip;
    }
 return 0;
} 