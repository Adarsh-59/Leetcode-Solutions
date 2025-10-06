class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int a[size(s)];

        for(int i=0 ; i<size(s) ; i++){
            a[i] = s[i] - t[i];
        }

        for(int i=0 ; i<size(s)-1 ; i++){
            for(int j=i+1 ; j<size(s) ; j++){
                if(s[i] == s[j]){
                    if(a[i] != a[j]){
                        return false;
                    }
                }
            }
        }

        for(int i=0 ; i<size(s)-1 ; i++){
            for(int j=i+1 ; j<size(s) ; j++){
                if(t[i] == t[j]){
                    if(a[i] != a[j]){
                        return false;
                    }
                }
            }
        }

        return true;
    }
};