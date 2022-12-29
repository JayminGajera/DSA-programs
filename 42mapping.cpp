#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    //creation
   unordered_map<string,int> m;

   //insertion

   //1
   pair<string,int> p = make_pair("jaymin",1);
   m.insert(p);

   //2
   pair<string,int> p2("gajera",2);
   m.insert(p2);

   //3

   //in first time insertion happen in map second time updation is happned
   m["mera"] = 3;

   m["mera"] = 4; //this will update mera at index 3

   //search

   cout<<m["mera"]<<endl;
   cout<<m.at("gajera")<<endl;

   cout<<m["unkownkey"]<<endl;
//    cout<<m.at("unknownkey")<<endl;

   //size
   cout<<m.size()<<endl;

   //to check presence
   cout<<m.count("bro")<<endl;

   //erase
   m.erase("jaymin");

   cout<<m.size()<<endl;

   //for access

//    for(auto i:m)
//    {
//     cout<<i.first<<" "<<i.second<<endl;
//    }

   //iterator
   unordered_map<string,int> :: iterator it = m.begin();

   while(it != m.end())
   {
    cout<<it->first<< " " << it->second<<endl;
    it++;
   }



}