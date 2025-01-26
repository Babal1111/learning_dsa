/// this is openAddressing (with linear probing) done from gfg

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
struct myhash{
    int *arr; // array(pointer pointing to a address)
    int size;
    myhash(int bucket){
        size = bucket;
        arr = new int[bucket];
        for(int i=0;i<bucket;i++){
            arr[i]=-1;
        }
    }
    void  insert(int key){
        int index = key % size;
        while (arr[index]!=-1)
        {
            index = (index+1)%size;
        }
        arr[index] = key;
        
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
            }
    }
    bool search(int key){
        int index = key % size;
        int flag = index;
       
        while(arr[index]!=-1){
            if(arr[index]==key){
                return true;
                }
            else{
                index= (index+1) %size;
                if(index==flag){
                    break;
                }
            }
        }
        return false;
    }
    void deleteKey(int key){
        int index = key % size;
        int flag = index;
       
        while(arr[index]!=-1){
            if(arr[index]==key){
                arr[index] = -2;
                break;
                }
            else{
                index= (index+1) %size;
                if(index==flag){
                    cout<<"\nKey : "<<key<<" was not there in hash nothing to delete";
                    break;
                }
            }
        }

    }
    
};

vector<int> hashing(vector<int> &arr,int bucket){
    vector<int> temp(bucket,-1);

for(int i=0;i<arr.size();i++){
    int key = arr[i]%bucket;
     while(temp[key] != -1) {
            key = (key + 1) % bucket; // linear probing
        }
        temp[key] = arr[i];
}
return temp;
}

int main(){
    // vector<int> arr = {10,3,20,4,19,20,21};
    // int bucket = 7;//size
    // // here 10%7,3%7 == 3, similARLY 4%7 and 18%7==4 ie collisions
    // vector<int> temp = hashing(arr,bucket);
    // for(auto i:temp){
    //     cout<<i<<" ";
    
    // }



    myhash h1(5);
    h1.insert(10);
    h1.insert(22);
    h1.insert(19);
    h1.insert(20);
    h1.insert(12);
    h1.print();
    cout<<"finding 19 : "<<h1.search(19);
    cout<<"finding 18 : "<<h1.search(18);
    h1.deleteKey(12);
    cout<<endl;
    h1.print();
    h1.deleteKey(13);



}