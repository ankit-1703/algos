#include <iostream>
using namespace std;
int main ()
{
    int n1=0,n2=1,sam;
    for(n2;n2<=1000;){
        sam=n2;
        n2=n2+n1;
        n1=sam;
        cout<<n2<<"  ";
    }
 return 0;
} 

