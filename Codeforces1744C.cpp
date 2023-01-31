#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n, i, j, ans;
    string a, s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        ans=0;
        cin>>a;
        long long arr[n];
        if(a[n-1]=='g'){
            arr[n-1]=n-1;
        }else{
            arr[n-1]=-1;
        }
        
        for(i=n-2; i>=0; i--){
            if(a[i]=='g'){
                arr[i]=i;
            }else{
                arr[i]=arr[i+1];
            }
        }
        for(i=0; i<n; i++)
        {
            if(a[i]==s[0]){
                if(arr[i]==-1){
                    ans=max(ans, n-1-i+1+arr[0]);
                }else{
                    ans=max(ans, arr[i]-i);
                }
            }
        }
        cout<<ans<<endl;
    }
}