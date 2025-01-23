// leetcode 49. Group Anagrams
  vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        vector<vector<string>> ans;
        int n= strs.size();
        for(int i=0;i<n;i++){
            string og = strs[i];
            sort(strs[i].begin(),strs[i].end());
            if(map.find(strs[i])!=map.end()){

                map[strs[i]].push_back(og);

            }
            else{
                map[strs[i]].push_back(og);
                    }
        }
        for(auto i:map){
                ans.push_back(i.second);
        }

        return ans;
    }