#include<iostream>
#include<unordered_set>//hashing
using namespace std;

//unordered set is like ball in theli when we call find element it gives just rendomly not have any orderd.
//if we put same element many times so in unordered set contain only one time. 

int main()
{
    unordered_set<int> s;
    s.insert(5);
    s.insert(10);
    s.insert(7);

    if(s.find(5)==s.end()){
        cout<<"Element not found";
    }
    else{
        cout<<"Element found"<<endl;
    }

    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    s.clear();
    cout<<"size ="<<s.size()<<" "<<endl;

    cout<<s.count(10)<<endl;
    if(s.count(10)==0)//count return only two value either 0 or 1.
    {
        cout<<"not present"<<endl;
    }

    s.erase(10);

    s.erase(s.begin(),s.end());

    return 0;


}