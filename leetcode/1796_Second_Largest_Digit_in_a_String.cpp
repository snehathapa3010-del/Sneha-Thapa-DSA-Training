

class Solution {
public:
    int secondHighest(string s) {
        int l=-1;
        int sl=-1;
        for(char ch:s){
            if(ch>='0' && ch<='9'){
                if(ch-'0'>l){
                    sl=l;
                    l=ch-'0';
                }else if(ch-'0'<l && ch-'0'>sl){
                    sl=ch-'0';
                }
            }
        }
        return sl;
    }
};