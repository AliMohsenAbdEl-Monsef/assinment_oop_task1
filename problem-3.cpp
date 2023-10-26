#include<iostream>
#include<vector>
#include<string>
using namespace std ;
 vector<string> split(string target, string delimiter);

int main (){
string target , delimiter;
cout << "please enter the target string." << endl;
getline(cin,target);
cout << "please enter the delimiter string." << endl;
getline(cin,delimiter);
vector<string> v1=split(target,delimiter);
for (int i=0;i<v1.size();i++ ){
  cout<<'\"'<<v1[i]<<'\"';
  if(i!=v1.size()-1)cout<<',';
}
// cout<<target<<" /// "<<delimiter;
}
vector<string> split(string target, string delimiter){
string s="";
vector<string> ans;
for (int i=0;i<target.size();i++){
  if (target[i]==delimiter[0]){
    bool ck=false;
    int l=i,r=i+delimiter.size()-1;
    int k=0,k2=delimiter.size()-1;
    
    while(l<=r){
      if(target[l]!=delimiter[k]||target[r]!=delimiter[k2]){
        goto no;
      }
      l++,k++,r--,k2--;
    }
      ans.push_back(s);
      s="";
      continue;
     no:;
  }
  s+=target[i];

}
if(s!=""){
  ans.push_back(s);
}
return ans;
}
