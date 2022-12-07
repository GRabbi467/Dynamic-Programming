#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>v(n+1);
    v.at(0) = 0;
    v.at(1) = 1;
    for( int i = 2; i <= n ; i++){
        v.at(i) = v.at(i-1)+v.at(i-2);
    }
    for( auto x : v){
        cout<<x<<endl;
    }
}
