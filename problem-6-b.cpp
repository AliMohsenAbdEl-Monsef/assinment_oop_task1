#include<iostream>
#include<algorithm>
 //#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std ;
static void numbers(string prefix, int k);
vector<string>v1;


int main (){
string prefix;
int k;
cout << "please, enter a prefix and the nubmer of digits which you want to write after you prefix"<<endl;
cin>>prefix>>k;
numbers(prefix,k);
sort(v1.begin(),v1.end());
for(auto it:v1){
  cout<<it<<endl;
}
}

static void numbers(string prefix, int k){
if (k==0){
v1.push_back(prefix);
return;
}
prefix+='0';
numbers( prefix,  k-1);
prefix.pop_back();
prefix+='1';
numbers( prefix,k-1);
}