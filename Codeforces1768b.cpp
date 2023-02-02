#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int n,k,ans,sum;
    while(t--)
    {
        cin >> n >> k;
        sum = n+1,ans = n+1;
        int arr[n+1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        for(int i = n;i>=1;i--)
        {
            if(sum<arr[i])
            {
                ans = min(ans,arr[i]);
            }
            sum = min(sum,arr[i]);
        }
        if(ans == n+1)
        {
            cout<<"0"<<endl;
        }
        else{
            ans = n-ans+1;
            if((ans%k)==0)
            {
                cout<<ans/k<<endl;
            }
            else{
                cout<<ans/k+1<<endl;
            }
        }        
    }
    return 0;
}   