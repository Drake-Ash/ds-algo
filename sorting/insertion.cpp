#include<iostream>
#include<vector>

using namespace std;

void print_list(vector<int> &arr){
    cout<<"[ ";
    for(int i = 0; i < arr.size(); i++)
        cout<<arr[i]<<" ";
    cout<<"]"<<endl;
}

void print_list(vector<int> &arr, int start, int end){
    cout<<"[... ";
    for(int i = start; i < end; i++)
        cout<<arr[i]<<" ";
    cout<<"...]"<<endl;
}

void insertion_sort(vector<int> &arr){
    int i, j, temp, k;
    for(i = 1; i < arr.size(); i++){
        for(j = i; j >= 0; j--){
            if(arr[j] < arr[j-1]){
                 k = arr[j];
                 arr[j] = arr[j-1];
                 arr[j-1] = k; 
            }
            else
                k = -1;
        }
    }
}

int main(){
    vector<int> arr;
    int n, temp;
    cout<<"enter size: ";
    cin>>n;
    cout<<"enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>temp;
        arr.push_back(temp);
    }
    insertion_sort(arr);
    print_list(arr);
    return 0;
}
