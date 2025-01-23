 bool isAnagram(string s, string t) {
        unordered_map<char,int> map1;
        unordered_map<char,int> map2;
        if(s.length()!= t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            map1[s[i]]+=1;
            map2[t[i]]+=1;
        }
        if(map1==map2){
            return true;
        }
        return false;
    }

      bool isAnagram2(string s, string t) {  //shortcut
        // if(s.size()!=t.size()){
        //     return false;
        // }
      sort(s.begin(),s.end());
      sort(t.begin(),t.end());
      return s==t;
    }
};