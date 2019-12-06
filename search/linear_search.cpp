#include<iostream>
#include<vector>
using namespace std;

void linear_search(vector<int> arr, int x){
    int found = -1, n =arr.size();
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            found = i;
            i = n;
        }
    }
    if(found != -1)
        cout<<"Found "<<x<<" in "<<found<<" position\n";
    else
        cout<<x<<" Not found\n";
}

int main(){
    vector<int> arr;
    int n, j, x;
    cout<<"enter size: ";
    cin>>n;
    cout<<"enter elements: ";
    for(int i = 0; i<n; i++){
        cin>>j;
        arr.push_back(j);
    }
    cout<<"enter the number you want to search: ";
    cin>>x;
    linear_search(arr, x);
    return 0;
}