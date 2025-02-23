class Solution {
public:
    string longestPalindrome(string s) {
        
        int n = s.length();
        unordered_set<string> mapp;
        for(int i=0;i<n;i++){
            string str = "";
            for(int j=i;j<n;j++){
                str = str+s[j];
                mapp.insert(str);

            }

        }
        unordered_map<string,int>mapp2;
        int maxx =-1;
        for(auto i: mapp){
            int s = i.length();
            string strRev;
            int j=0;
            for(int ii=s-1;ii>=0;ii--){
                strRev += i[ii];
                j++;
            }
            if(strRev==i){
                maxx=max(maxx,s);
                mapp2[i]=s;
            }
            // cout<<i<<" "<<maxx;
        }
        for(auto i:mapp2){
            if(i.second == maxx){
                return i.first;
            }
        }
        return "babal";
    }
};