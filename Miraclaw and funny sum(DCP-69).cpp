#include<iostream>
using namespace std;
int main(){
    int t;
 unsigned long long int arr[1000];
    cin>>t;
    while(t--){
        int n,i,a=0,b=0,ans=0;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
         for(i=0;i<n;i++)
          a=a+arr[i];
        for(i=0;i<n;i++){
                if(arr[i]<i){
                        arr[i]=0;
                b=b+arr[i];
                }
          else  b=b+(arr[i]-i);

        }


        if(a>b){
                ans=a-b;
        cout<<ans<<endl;
        }
        else {
                ans=b-a;
        cout<<ans<<endl;

        }

    }
    return 0;



}
