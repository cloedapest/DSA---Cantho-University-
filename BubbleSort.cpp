#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {3, 2, 6, 4, 7, 2, 3};
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v.size() - i - 1; j++){
            if(v[j] > v[j + 1]){
                swap(v[j], v[j + 1]);
            }
        }
    }
    for(int x: v) cout<<x<<" ";
}