#include<iostream>
#include<math.h>
using namespace std;

// 6 --> 110

int main()
{
    int n;
    cout<<"Enter decimal number : ";
    cin>>n;
    int ans=0,i=0;

    while(n!=0)
    {
        int bit;
        bit=n&1;// here n pan binary ma transfer thai jay and pachhi 1 sathe and operation thay

        ans=(bit * pow(10,i)) + ans;
        n=n>>1;
        i++;
    }

    cout<<"Binary is : "<<ans<<endl;

    return 0;
}