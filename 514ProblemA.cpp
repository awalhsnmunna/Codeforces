
// Question:  https://codeforces.com/contest/514/problem/A  //


#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int len = s.size();
    int f = s[0]-'0';

    if(f==9){
        s[0]='9';
    }
    else{
        if(f>4){
            s[0]= ((9-f)+'0');
        }
    }

    for(int i=1; i<len; i++){
        int x = s[i]-'0';
        if(x<5 || x==0){
            continue;
        }
        else{
            s[i] = ((9-x)+'0');
        }
    }

    cout<<s<<endl;
}



int main(){
    solve();
    return 0;
}
