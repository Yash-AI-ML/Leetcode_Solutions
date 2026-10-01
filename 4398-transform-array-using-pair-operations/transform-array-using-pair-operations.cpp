class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long  val1 = 0, val2=0;
        for(int  i =0;i <source.size(); i++){
            val1 += source[i];
        }
        for(int  i =0;i <target.size(); i++){
            val2 += target[i];
        }
        return (val1 == val2);
    }
};