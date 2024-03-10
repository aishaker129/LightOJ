/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 10/03/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define T  int t; cin>>t; while(j<t)
const int mx = 1e5+123;
int a[mx];
ll sum[mx];
int main(){
    optimize();
    int j=0;
    T{
        int n,m;
        cin>>n>>m;
        for(int i=1; i<=n; i++) cin>>a[i];
        for(int i=1; i<=n; i++) sum[i] =sum[i-1]+a[i];
        for(int i=1; i<=n; i++) sum[i] %=m;
        map<int,int> cnt;
        ll ans=0;
        cnt[0]++;
        for(int i=1; i<=n; i++){
            ans +=cnt[sum[i]];
            cnt[sum[i]]++;
        }

        cout<<"Case "<<j+1<<": "<<ans<<endl;
        j++;
    }

    return 0;
}