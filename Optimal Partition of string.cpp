/*class Solution {
public:
    int partitionString(string s) {
        
    }
};*/

class Solution {
public:
    int partitionString(string s) {
        int freq=1;
        set<char> stt;
        for(auto it:s)
        {
            if(stt.count(it)){
                stt.clear();
                freq++;
            }
            stt.insert(it);
        }
        return freq;
    }
};
