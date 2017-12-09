/*****solved*****/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,j;
    cin>>t;
    for(i=1;i<=t;i++){
            int a,b=0,flag=0;
          cin>>a;
         for(j=2;j<=a/2;j++){
            b=j*j;
            if(b==a) flag=1;
         }
         if(flag==1 || a==1) cout<<"Case "<<i<<":"<<" YES"<<endl;
        else cout<<"Case "<<i<<":"<<" NO"<<endl;
    }



  return 0;
}
