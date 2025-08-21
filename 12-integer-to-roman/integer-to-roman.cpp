class Solution {
public:
    string intToRoman(int num) {
        string s = "", temp;
        int r;

        r = num%10;
        num -= r;
        if(r){
            switch(r){
                case 1:
                s = "I" + s;
                break; 

                case 2:
                s = "II" + s;
                break;

                case 3:
                s = "III" + s;
                break;

                case 4:
                s = "IV" + s;
                break;

                case 5:
                s = "V" + s;
                break;

                case 6:
                s = "VI" + s;
                break;

                case 7:
                s = "VII" + s;
                break;

                case 8:
                s = "VIII" + s;
                break;

                case 9:
                s = "IX" + s;
                break; 
            }
        }

        r = num%100;
        num -= r;
        if(r){
            switch(r){
                case 10:
                s = "X" + s;
                break; 

                case 20:
                s = "XX" + s;
                break;

                case 30:
                s = "XXX" + s;
                break;

                case 40:
                s = "XL" + s;
                break;

                case 50:
                s = "L" + s;
                break;

                case 60:
                s = "LX" + s;
                break;

                case 70:
                s = "LXX" + s;
                break;

                case 80:
                s = "LXXX" + s;
                break;

                case 90:
                s = "XC" + s;
                break; 
            }
        }

        r = num%1000;
        num -= r;
        if(r){
            switch(r){
                case 100:
                s = "C" + s;
                break; 

                case 200:
                s = "CC" + s;
                break;

                case 300:
                s = "CCC" + s;
                break;

                case 400:
                s = "CD" + s;
                break;

                case 500:
                s = "D" + s;
                break;

                case 600:
                s = "DC" + s;
                break;

                case 700:
                s = "DCC" + s;
                break;

                case 800:
                s = "DCCC" + s;
                break;

                case 900:
                s = "CM" + s;
                break; 
            }
        }

        r = num%10000;
        num -= r;
        if(r){
            switch(r){
                case 1000:
                s = "M" + s;
                break; 

                case 2000:
                s = "MM" + s;
                break;

                case 3000:
                s = "MMM" + s;
                break;
            }
        }


        return s;
    }
};