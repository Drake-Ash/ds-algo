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

void selection_sort(vector<int> &arr){
    int i, j, temp = arr.size();
    for(i = 0; i < arr.size(); i++){
        for(j = i + 1; j < arr.size(); j++){
            if(arr[j] < arr[temp])
                temp = j;
        }
        arr[i] += arr[temp];
        arr[temp] = arr[i] - arr[temp];
        arr[i] -= arr[temp];
        print_list(arr);
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
    selection_sort(arr);
    print_list(arr);
    return 0;
}
