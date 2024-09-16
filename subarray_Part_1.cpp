//r 
#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define optimize();ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

void subArray(int arr[],int n){
    int st,end,i;
    for ( st = 0; st<n; st++){
        for ( end =st; end<n; end++){
            for ( i =st; i<=end; i++)
            {
                cout<<arr[i];
            }
            cout<<" ";
            
        }
        cout<<endl;
        
    }
    
}
void Max_subArray(int arr[],int n){
 int st,end,max_sum=INT_MIN,current_sum=0;
 for ( st = 0; st <n; st++){
    current_sum=0;
    for ( end=st; end<n; end++){
        current_sum+=arr[end];
        max_sum=max(current_sum,max_sum);
    }
    
 }
 cout<<"max sub array"<<" "<<max_sum<<endl;
}
void max_sumArray_using_Kadanes_algorithm(int arr[],int n){
 int st,end,max_sum=INT_MIN;
 int current_sum=0;
 for ( st = 0; st<n;st++){
        current_sum+=arr[st];
        max_sum=max(current_sum,max_sum);
        if(current_sum<0){
            current_sum=0;
        }
    }
    cout<<"max sub array"<<" "<<max_sum<<endl;
 }
  

int32_t main(){
   int n=5,n1=7;
   int arr[5]={1,2,3,4,5};
   int a[7]={3,-4,5,4,-1,7,-8};
   subArray(arr,n);
   Max_subArray(arr,n);
   max_sumArray_using_Kadanes_algorithm(a,n1);
    return 0;
}
