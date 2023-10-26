#include<iostream>
//#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std ;
static void binaryPrint(int n);


int main (){
int number ;
cout<<"kindly, enter the number which you want to convert to binary"<<endl;
cin>>number;
if(!number){
  cout<<0;
}
else{
  binaryPrint(number);
}
}
static void binaryPrint(int n){
     if(n==0){
      return;
     }
     binaryPrint(n/2);
     cout<<(n%2)?1:0;
}