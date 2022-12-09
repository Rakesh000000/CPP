// Making a four character captcha code generator and validator

#include<iostream>
#include<ctype.h>
#include<time.h>
#include<stdlib.h>
#include<cstring>
using namespace std;

int main(){
    system("color 0B");
    
    char captcha[5], input[5], value;
    srand(time(NULL));
    
    for(int i=0; i<4;){
        value = rand()%127;
        if(isalnum(value)){
            captcha[i]=value;
            i++;
        }
    }
    captcha[4]='\0';

    cout<<captcha<<endl;
    cout<<"Enter the captcha: ";cin>>input;

    if(strcmp(input, captcha)==0)
    cout<<"MATCHED"<<endl;
    else
    cout<<"Invalid";

    return 0;
}