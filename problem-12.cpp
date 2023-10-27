#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
   ifstream ali;
   string line;
   ali.open("phishing phrases.txt");
   map<string,int>mp;
   map<string,pair<int,int>>mpp;
   int m=10;
while(getline(ali,line)){
mp[line]=m/10;
m++;
mpp[line]={0,0};
}
ali.close();
ifstream input;
char s[10];
cout<<"please enter the file text name"<<endl;
cin>>s;
strcat(s,".txt");
input.open(s);
if(input.is_open()){
    int total_points=0;
while(getline(input,line)){
    string s2="";
    //cout<<',';
for(int i=0;i<line.size();i++){
    
    if(line[i]==' '){
      if(mp[s2]!=0){
        mpp[s2].first++;
        mpp[s2].second+=mp[s2];
        total_points+=mp[s2];
        cout<<"word: "<<s2<<"       occurance: "<<mpp[s2].first<<"      points: "<<mpp[s2].second<<endl;
      }
      s2="";
      continue;
    }
    s2+=line[i];
}
}
cout <<"total points of the message is: "<<total_points<<endl;
if(total_points>40){
    cout<<"we predict that this message is a phishing message"<<endl;
}
else {
    cout <<"we predict that the message is a normal message"<<endl;
}
input.close();
}
else{
    cout<<"this file doesn't exist in the program directory"<<endl;

}

}