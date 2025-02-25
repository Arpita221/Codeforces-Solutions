#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
int arr[n];
cin>>n;
int c1=0,c2=0;

for(int i=0;i<n;i++){
    cin>>arr[i];

}



for(int i=0;i<n;i++){
    if(arr[i]==1)
    c1++;
    else c2++;
    
}

// if(c1==c2){
//     cout<<"Yes"<<endl;
// }
// else if(c2%2==0||c1%2==0) cout<<"Yes"<<endl;
// else cout<<"No"<<endl;




 if ((c1 + 2 * c2) % 2 != 0) {
    cout << "NO\n";
  } else {
    int sum = (c1 + 2 * c2) / 2;
    if (sum % 2 == 0 || (sum % 2 == 1 && c1 != 0)) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}

}