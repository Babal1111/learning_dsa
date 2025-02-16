#include<iostream>
#include<vector>
using namespace std;
void insert(vector<int>&v,int last){
    if(v.size()==0 ||last>v[v.size()-1])
    { v.push_back(last); 
    return;}

    int temp = v[v.size()-1];
    v.pop_back();
    insert(v,last);
    v.push_back(temp);
    return;
}
void Sort(vector<int>&v){
    if(v.size()==0) return;
    int last= v[v.size()-1];
    v.pop_back();
    Sort(v);
    insert(v,last);
    // Sort(v,n-1);


}

int main(){
vector<int> v = {100, 10, 20, 50, 60};
    int n = v.size();

Sort(v);
cout << "Sorted array is: ";
for (int i = 0; i < n; i++){
cout << v[i] << " ";
}
}