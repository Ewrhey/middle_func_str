#include "middle_str.h"
//abcdefghijklmnopqrstuvwxyz
string itc_Cezar(string str, int k){
string alf = "abcdefghijklmnopqrstuvwxyz";
int sdvig;


k = k % itc_len(alf);
for (int i = 0; str[i]!= '\0'; i++){
    sdvig = i + k;
    if (sdvig < 0){
        sdvig = itc_len(alf) + i + k;
    }
    sdvig = sdvig % itc_len(alf);
    str[i] = alf[sdvig];
}


return str;
}

string itc_rmFreeSpace(string str){
while(itc_isFirstInSecond("  ", str)){
    str = itc_three_str(str, "  ", " ");
}
return str;
}



string itc_decToBase(int num, int base){
string str;
int a = 0;
while (num > 0){
a = num % base;
if (a < 10)
    str += char_number(a);
else if (a == 10)
    str += 'A';
else if (a == 11)
    str += 'B';
else if (a == 12)
    str += 'C';
else if (a == 13)
    str += 'D';
else if (a == 14)
    str += 'E';
else if (a == 15)
    str += 'F';
num = num / base;
}
str = itc_reverse_str(str);
return str;
}


string itc_maxCharWord(string str){
    long long len = 0, max_len = 0;
    string max_word = "", itog = "";
    if (str == "" || itc_find_str(str, " ") == -1){return "error";}
    for (long long i = 0; str[i] != '\0'; i++){
        if (('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z')){
            len++;
            max_word = max_word + str[i];
        }
        else{
           if (max_len < len){max_len = len; itog = max_word;}
           len = 0;
		      max_word = "";
        }
    }

    if (max_len < len){itog = max_word;}

    return itog;
}
