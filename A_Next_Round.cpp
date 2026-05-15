#include <bits/stdc++.h>
using namespace std;

int main() {
     int n , m;
     cin>> n >> m;
     int a[100];

     int count = 0;
     for(int i = 0; i < n; i++){
        cin>>a[i];
     }

     int score = a[m-1];
     for(int i = 0; i < n; i++){
        if(a[i] >= score && a[i] > 0){
            count++;
        }
     }
    cout<<count;

     return 0;
}