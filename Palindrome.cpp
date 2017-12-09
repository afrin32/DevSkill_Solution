/******solved******/
#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    char str[150],str1[150];
    int flag,t,length,i;
    cin>>t;
     while(t--){
    cin>>str;
      char c;
      i=0;
  while (str[i])
  {
    str1[i]=(tolower(str[i]));
    i++;
    }
    str1[i]='\0';

    flag=0;
    length=strlen(str1);

    for(int j=0;j<length;j++){
        if(str1[j]!=str1[length-j-1]){
            flag=1;
            break;
        }

    }
    if(flag) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}
    return 0;
}

