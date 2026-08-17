// Last updated: 8/17/2026, 4:07:10 PM
class Solution {
public:
    string intToRoman(int num) {
        string result = "";
        int t=0;
            t=num%10;
            if(t==4){
                result = "IV" + result;
            }
            else if(t==9){
                result = "IX" + result;
            }
            else{
                if(t>=5){
                    result = "V" + result;
                    t-=5;
                }
                for(int i=0;i<t;i++){
                    result = result+ "I";
                }
            }
            num/=10;
            t=num%10;
            string subres="";
            if(t==4){
                subres = "XL" + subres;
            }
            else if(t==9){
                subres = "XC" + subres;
            }
            else{
                if(t>=5){
                    subres = "L" + subres;
                    t-=5;
                }
                for(int i=0;i<t;i++){
                    subres = subres+"X";
                }
            }
            result=subres+result;
            num/=10;
            t=num%10;
            subres="";
            if(t==4){
                subres = "CD" + subres;
            }
            else if(t==9){
                subres = "CM" + subres;
            }
            else{
                if(t>=5){
                    subres = "D" + subres;
                    t-=5;
                }
                for(int i=0;i<t;i++){
                    subres =  subres + "C";
                }
            }
            result=subres+result;
            num/=10;
            t=num%10;
            for(int i=0;i<t;i++){
                result = "M" + result;
            }
        return result;
    }
};