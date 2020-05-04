#include <iostream>
#include<queue>
#include<stack>
#include <bits/stdc++.h> 

using namespace std;

class Solution {

std::stack <char> s;
std::queue <char> q;

public:

void pushCharacter(const char &ch){
    s.push(ch);
}

void enqueueCharacter(const char &ch){
    q.push(ch);
}

char popCharacter(){
    char ret_val = s.top();
        s.pop();
        return ret_val;
}

char dequeueCharacter(){
    char ret_val = q.front();
        q.pop();
        return ret_val;
}

};

