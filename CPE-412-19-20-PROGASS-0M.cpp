#include<iostream>
#include<cstring>

    
using namespace std;

int main(){
    char str[100];
    int j,count=0,count1;
    cout<<"Enter String: ";
    cin>>str;
    for(j=0;j<strlen(str);j++){
        if(str[j]=='b'){
            count++;
        }
        if(str[j]!='a'&&str[j]!='b'){
            cout<<"Invalid";
            count1++;
            break;
        }
    }
    if(count>=5&&count1==0){
        cout<<"Accepted";
    }
    if(count<5){
        cout<<"Invalid";
    }
    return 0;
}


//ID NO: 297965