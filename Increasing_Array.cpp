#include <bits/stdc++.h>
using namespace std;
void PrintVec(vector<int> &v){
    for(auto &x:v){
        cout<<x<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    int cnt = 0;
    for(int i = 0;i<n;i++){
        for(int j = 1;j<n;j++){
            if(v[i] > v[j]){
                swap(v[i], v[j]);
                cnt++;
                break;
            }
        }
    }
    cout<<cnt<<endl;
    // PrintVec(ans);
    return 0;
}