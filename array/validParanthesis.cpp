#include<bits/stdc++.h>

bool balance(const std::string& str){
    std::stack<char>st;
    for(int i=0;i<str.length();i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='[' ){
            st.push(str[i]);
        }
        else{
            if(
            !st.empty() &&
         (st.top()=='(' && str[i]==')')||
         (st.top()=='{' && str[i]=='}')||
         (st.top()=='[' && str[i]==']')
         ){
            st.pop();
         }else{
            return false;
         }



    }
}
    return st.empty();
}

int main(){
    std::string s = "{]([)}";
    if (balance(s))
        std::cout << "true";
    else
        std::cout << "false";
    return 0;
}


