class Solution {
public:
    string addBinary(string a, string b) {
        string s = "";
        int c = 0;
        for(int i = a.size()-1, j = b.size()-1 ; i>=0 || j >= 0 ; ){
            if(i >= 0){
                if(j >= 0){
                    if(a[i] == '1' && b[j] == '1'){
                        if(c){
                            s = "1" + s;
                        }
                        else{
                            s = "0" + s;
                        }
                        c = 1;
                    }
                    else if((a[i] == '1' && b[j] == '0') || (a[i] == '0' && b[j] == '1')){
                        if(c){
                            s = "0" + s;
                            c = 1;
                        }
                        else{
                            s = "1" + s;
                            c = 0;
                        }
                    }
                    else{
                        if(c){
                            s = "1" + s;
                        }
                        else{
                            s = "0" + s;
                        }
                        c = 0;
                    }

                    j--;
                }
                else{
                    if(a[i] == '1'){
                        if(c){
                            s = "0" + s;
                            c = 1;
                        }
                        else{
                            s = "1" + s;
                            c = 0;
                        }
                    }
                    else{
                        if(a[i] == '0'){
                            if(c){
                                s = "1" + s;
                                c = 0;
                            }
                            else{
                                s = "0" + s;
                            }
                        }
                    }
                }

                i--;
            }
            else{
                if(j >= 0){
                    if(b[j] == '1'){
                        if(c){
                            s = "0" + s;
                            c = 1;
                        }
                        else{
                            s = "1" +s;
                            c = 0;
                        }
                    }
                    else{
                        if(c){
                            s = "1" + s;
                            c = 0;
                        }
                        else{
                            s = "0" + s;
                        }
                    }
                    j--;
                }
            }
        }

        if(c){
            s = "1" + s;
        }

        return s;
    }
};