#include<bits/stdc++.h>
using namespace std;

void output(vector<int>s[],int j,int b[]){
    stack<int>tac;
    tac.push(j);
    cout << j<<" ";
    b[j] =1;
    while(tac.empty() != 1){
        int t = tac.top();
        tac.pop();
        for(int i = 0;i < s[t].size() ;i ++ ){
            if(b[s[t][i]] != 1){
                b[s[t][i]] = 1;
                cout << s[t][i] <<" ";
                tac.push(t);
                tac.push(s[t][i]);
                break;
            }
        }
    } 
}
int main(){
    int n; cin >> n;
    vector<int>s[100];
    int b[100];
    memset(b,0,100);
  
    for(int i = 0;i < n;i ++ ){
        int x,y; cin >> x >> y;
        s[x].push_back(y);
        s[y].push_back(x);
    }
    output(s,1,b);
    return 0;
}