#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;

cin>>n;

// for(int i=0;i<n;i++){

// arr[i]=pow(2.i);


// }

 int sum1=pow(2, n),sum2=0;


    for (int i = 1; i < n/ 2; i++){
        sum1 =sum1+ pow(2, i);
    }

    for (int i = n/2; i <n; i++){

        sum2 =sum2+ pow(2,i);
}
    cout << sum1 - sum2 << endl;












    }











}













