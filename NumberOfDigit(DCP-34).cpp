/*****solved******/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,j;
    cin>>t;
    while(t--){
            int n,a,rem=0,cnt=0;
          cin>>n;
       if(n==0){
                cnt=1;
                cout<<cnt<<endl;
          }
          else {
         while(n){
            rem=n%10;
            cnt++;
            n=n/10;
         }

   cout<<cnt<<endl;
    }
    }



  return 0;
}
