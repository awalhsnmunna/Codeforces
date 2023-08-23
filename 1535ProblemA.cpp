/* https://codeforces.com/problemset/problem/1535/A */

#include<bits/stdc++.h>
using namespace std;

int Max(int a, int b){
    int max;
    if(a>b){
        max=a; 
    }else{
        max=b;
    }
    return max;
}

int Min(int a, int b){
    int min;
    if(a<b){
        min=a;
    }else{
        min=b;
    }
    return min;
}

int main()
{
    int s1,s2,s3,s4;
    int t;
    cin>>t;

    while(t--){
        scanf("%d %d %d %d",&s1,&s2,&s3,&s4);
        int max1=Max(s1,s2);
        int min1=Min(s1,s2);
        int max2=Max(s3,s4);
        int min2=Min(s3,s4);

        if(min1>max2 || min2>max1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
  
