/****solved****/
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
   int t;
   cin>>t;
   char str[150];
   cin.getline(str,150);
  while(t--){
    cin.getline(str,150);
    if(str[0]=='8' && str[1]=='8'){
     if(str[2]=='0' && str[3]=='1' && str[4]=='6') cout<<str<<" Airtel"<<endl;
    else if(str[2]=='0' && str[3]=='1' && str[4]=='7') cout<<str<<" Grameenphone"<<endl;
    else if(str[2]=='0' && str[3]=='1' && str[4]=='5') cout<<str<<" Teletalk"<<endl;
    else if(str[2]=='0' && str[3]=='1' && str[4]=='8') cout<<str<<" Robi"<<endl;
    else if(str[2]=='0' && str[3]=='1' && str[4]=='1') cout<<str<<" Citycell"<<endl;
    else if(str[2]=='0' && str[3]=='1' && str[4]=='9') cout<<str<<" Banglalink"<<endl;

    }
   else if(str[0]=='0' && str[1]=='1' && str[2]=='6') cout<<"88"<<str<<" Airtel"<<endl;
    else if(str[0]=='0' && str[1]=='1' && str[2]=='7') cout<<"88"<<str<<" Grameenphone"<<endl;
    else if(str[0]=='0' && str[1]=='1' && str[2]=='5') cout<<"88"<<str<<" Teletalk"<<endl;
    else if(str[0]=='0' && str[1]=='1' && str[2]=='8') cout<<"88"<<str<<" Robi"<<endl;
    else if(str[0]=='0' && str[1]=='1' && str[2]=='1') cout<<"88"<<str<<" Citycell"<<endl;
    else if(str[0]=='0' && str[1]=='1' && str[2]=='9') cout<<"88"<<str<<" Banglalink"<<endl;

   }
  return 0;

}

