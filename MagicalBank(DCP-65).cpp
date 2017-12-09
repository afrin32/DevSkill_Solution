#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
    cin>>t;
    while(t--){
 int a,b,ans=0,cnt=0;
      cin>>a;
     for(b=1;b<=a;b++){
        ans=ans+b;
        cnt++;
        if(ans>=a){
             cout<<cnt<<endl;
             break;
        }
     }

    }

   return 0;

}


