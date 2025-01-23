// leetcode 2965. Find Missing and Repeated Values

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& arr) {
        unordered_map<int,int> map;
        vector<int> temp(2);
        int n= arr.size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(map.find(arr[i][j]) != map.end()){
                    map[arr[i][j]] += 1;
                }
                else{
                    map[arr[i][j]]=1;
                }
            }
        }
        for(auto it:map){
            if(it.second==2){
                temp[0] = it.first;
            }
        }
        for(int i=1;i<=n*n;i++){
            if(map.find(i) == map.end()){
                temp[1]=i;
                
            }

        }

        return temp;
        
    }
       vector<int> findMissingAndRepeatedValues2(vector<vector<int>>& arr) { //eficient way
   int n = arr.size();
   vector<int> result(2);
   vector<int> frequency(n*n+1,0); // intialises it with 0es

   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        frequency[arr[i][j]]+=1;
    }
   }
   for(int i = 1; i <= n * n; i++) {
            if (frequency[i] == 0) {
                result[1] = i; // Missing value
            }
            if (frequency[i] == 2) {
                result[0] = i; // Repeated value
            }
        }
        return result;
    }