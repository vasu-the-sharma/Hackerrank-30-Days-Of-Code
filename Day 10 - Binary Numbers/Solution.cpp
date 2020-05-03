#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int remainder=0;
    int count=0;
    int max=0;

    while(n!=0) {
        remainder=n%2;
        n=n/2; 

        if(remainder==1) {
            count++;
        }
        else if(remainder==0) {
            count=0;
        }

        if(count>max) {
            max=count;
        }
    }
       cout<<max;

    return 0;
}
