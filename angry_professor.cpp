# include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
      int n,k;
      cin >> n >> k;
      int stu[n];
      for(int i=0;i<n;i++){
          cin >> stu[i];
      }
      int count=0;
      for ( int i=0;i<n;i++){
          if(stu[i]<=0){
              count++;
          }
      }
      if(count>=k){
          cout << "NO" << endl;
      }
      else if(count!=k){
          cout << "YES" << endl;
      }
    }
}