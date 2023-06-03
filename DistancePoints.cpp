/* https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/R */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;

    double ans = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    
    cout<<fixed<<setprecision(9);
    cout<<sqrt(ans);

    return 0;
}
