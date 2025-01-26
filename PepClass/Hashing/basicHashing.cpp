/// this is hasshing with chaining


#include<iostream>
#include<list>
using namespace std;
struct myHash
{
    int bucket;
    list <int> *table;
    myHash(int b){
        bucket=b;
        table = new list<int> [b];  
        cout<<"hash map created(array of linked headers) with bucket size of : "<<b<<endl;
    }

    void insertKey(int key){
        int i = key%bucket;
        table[i].push_back(key);
    }
    bool findKey(int key){
        int i = key%bucket;
        // if(table[i] == key){
        //     return true;
        // }

        for(auto i:table[i]){ // cos ther is list at table[i] after collision so iterate through all to find if that exists
            if(i==key) return true;
        }
        return false;

    }
    void print(){
        cout<<"\n printig hash map :"<<endl;
        for(int i=0;i<bucket;i++){
        for(auto i:table[i]){
            cout<<i<<" ";
        }
        }
        

    }
    void deleteKey(int key){
        int i = key%bucket;
        table[i].remove(key);
    }
    /* data */
};

int main(){
    myHash h1(7);
    h1.insertKey(1);
    h1.insertKey(2);
    h1.insertKey(3);
    h1.insertKey(4);
    h1.insertKey(4); // it will be added after the previous 4(linked list- chainning)
    h1.insertKey(10); // 10%7=3 therefor same key as 3,3%7=3
    // 10 is added just after 3


    
    cout<<"\n key 1 existst ?: "<<h1.findKey(1);
    cout<<"\n key 10 existst ?: "<<h1.findKey(10);
    h1.deleteKey(1);
    cout<<"\n key 1 existst ?: "<<h1.findKey(1);
    h1.print();


    
}

