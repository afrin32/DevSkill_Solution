/*****solved****/
#include<bits/stdc++.h>
using namespace std;
int main(){

   int t;
   cin>>t;
   while(t--){
    int a,flag=0;
    cin>>a;

    for(int i=2;i<=a/2;i++){
        if(a%i==0) flag=1;
    }

    if(flag==1 || a==0 || a==1) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
   }

return 0;

}
