/******solved******/
#include<bits/stdc++.h>
#include <string>

using namespace std;
int main(){
    int t;
  cin>>t;
    char str[1000],str1[1000];
     cin.getline(str,1000);
 while(t--){

  cin.getline(str,1000);

    int length,i;


     length=strlen(str);

      for(i=0;i<length;i++){
        str1[i]=str[length-i-1];

      }
      str1[i]='\0';
     cout<< str1 <<endl;


    }


return 0;
}


