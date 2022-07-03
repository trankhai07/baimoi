#include<bits/stdc++.h>
using namespace std;
int a[100][100];
vector<int>v[100];
void euler(int u,int n){
    stack<int>st,CE;
    st.push(u);
    while(st.empty() != 1){
        int cn =0;
        int s =st.top();
            for(int i = 1;i <= n;i ++ ){
                if(a[s][i] == 1){
                    st.push(i); cn =1;
                    a[s][i] = a[i][s]=0;
                    break;
                }
            }
        if(cn == 0) {
            CE.push(s);
            st.pop();
        }
    }
    while(CE.empty()!= 1){
        cout << CE.top() <<" ";
        CE.pop();
    }
}
int main(){
    int n,m;
    cin >> n >> m;
    int kt = 0;
    for(int i =1;i <= n;i ++ ){
        for(int j =1 ;j <= n;j ++ ){
            cin >> a[i][j];
            if(a[i][j] == 1){
                v[i].push_back(j);
            }
        }
    }
  for(int i =1;i <= n;i ++){
     if(v[i].size() % 2 != 0){
         kt++;
         if(kt > 2){
             cout <<"no Euler cycle\n";
             break;
         }
     }
  }
  if(kt <= 2) 
    euler(m,n);
    
}