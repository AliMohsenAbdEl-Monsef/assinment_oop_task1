#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std ;
static bool bears(int n);
int main (){
int n;
cin>>n;
bool ck=bears(n);
if(!ck){
    cout<<"you can get 42 form "<<n;
}
else{
    cout << "sorry, it is impossible to get 42 from "<<n;
}
}
bool ck=true;
static bool bears(int n){
    if(n==42){
      ck=false;
      return ck;
    }
    if(ck&&n%2==0){
         n/=2;
         bears( n);
         n*=2;
    }
     if(ck&&(n%4==0||n%3==0)){
        int l=(n%10)*((n%100)/10);
        n-=l;
        bears(n);
        n+=l;
     }
     if(ck&& n%5==0){
        n-=42;
        bears(n);
        n+=42;
     }
     return ck;
}
