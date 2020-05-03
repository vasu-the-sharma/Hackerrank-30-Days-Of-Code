#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


using namespace std; 
int main() { 
    int T,i,j; 
    string s; 
    cin>>T; 
     
    for(j=0;j<T;j++){
    cin>>s; 
    int size=s.size();
    for(i=0;i<size; i++) {
        if(i%2==0) {
            cout<<s[i]; }
    }
    cout<<" ";
    for(i=0;i<size; i++) {
        if(i%2==1) {
            cout<<s[i]; }
    }
    cout<<endl;
    }
    return 0;
    }
