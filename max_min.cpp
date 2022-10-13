#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main(){
int arr[]={-1 , 9 , 8 , 7, 0, 7};
int mini = *min_element(arr , arr+n);
 int maxi = *max_element(arr , arr+n);
  
  cout<<maxi + mini<<endl;
  return 0;
}
