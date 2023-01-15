#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream a;
a.open("ram.txt");
int b;
cout<<"Entervalue of a";
cin>>b;
a.put(b);
a.close();
return 0;
}
