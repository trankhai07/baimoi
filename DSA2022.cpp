#include<bits/stdc++.h>
using namespace std;
vector<string>v;
void output(int a[]){
    string s="";
    if(a[5] == 0 || a[3] == 1 || (a[1] == 0 && a[2] == 0) || (a[3] == 0 && a[4] == 0)) return ;
    for(int i = 1;i <= 8;i ++ ){
        if(a[i] == 1){
            if(i == 2 || i == 4) s = s+'2'+'/';
            else s+='2';
        }
        else{
            if(i == 2 || i == 4) s = s+'0'+'/';
            else s+='0';
        } 
    }
    v.push_back(s);
}
void sinh(int a[],int j){
    for(int i = 0;i <= 1; i++ ){
        a[j] = i;
        if(j == 8) output(a);
        else sinh(a,j+1);
    }
}
int main(){
    int a[9];
    sinh(a,1);
    sort(v.begin(),v.end());
    for(int i = 0;i < v.size();i ++ ) cout << v[i] <<endl;
    return 0;
}