#include <iostream>
using namespace std;
int main ()
{
    int n,i=2,flag=1;
    cin >> n;
    for(i;i<=n/2;i++){
        if (n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==0){
        cout<<n<<" is not prime";
    }else{
        cout<<n<<" is prime";
    }
 return 0;
} 