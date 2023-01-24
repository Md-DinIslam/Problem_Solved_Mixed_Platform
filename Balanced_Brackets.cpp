#include <bits/stdc++.h>
using namespace std;
unordered_map<char,int> sym_val = {{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
string isBalanced(string s) {
    stack<char> sb;
    for(char bracket: s)
    {
        if(sym_val[bracket] < 0)
        {
            sb.push(bracket);
        }
        else{
            if(sb.empty())
            {
                return "NO";
            }
            char top = sb.top();
            sb.pop();
            if(sym_val[bracket] + sym_val[top]!= 0) 
            {
                return "NO";
            }
        }
    }
    if(sb.empty()) return "YES";
    return "NO";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }
}
