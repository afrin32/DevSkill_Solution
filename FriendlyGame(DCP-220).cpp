/*******solved*****/
#include<iostream>

using namespace std;
int main(){
   int t,i,n;
   cin>>t;
 for(int j=1;j<=t;j++){
       cin>>n;
    long long int arr,cnt=0,ans=0;

       for(i=0;i<n;i++){
          cin>>arr;
          cnt++;
       }

         if(cnt==1){
                ans=arr;
         }

       else
       ans=0;

       cout<<"Case "<<j<<": "<<ans<<endl;


  }
  return 0;

}



