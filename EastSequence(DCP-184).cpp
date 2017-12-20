/*******solved*****/
#include<iostream>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
     int n,a=1,b=3,c=0;
     cin>>n;
     if(n==1)  cout<<n<<endl;
     else if(n==2){
         c=3;
            cout<<c<<endl;
     }
     else{
     for(int i=3;i<=n;i++){
         c=a+b;
         a=b;
         b=c;
     }

     cout<<c<<endl;

   }
   }

   return 0;




}
