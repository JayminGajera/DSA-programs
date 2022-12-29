#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	
	sort(a,a+n);
	
	int max = 0;
	for(int i=0;i<n;i++)
	{
	   
	    int k = a[i]*(n-i);
	    
	    if(k>max)
	    {
	        max = k;
	        
	    }
	}
	cout<<max<<endl;
	
	return 0;
}
