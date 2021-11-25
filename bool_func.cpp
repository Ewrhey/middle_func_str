#include "middle_str.h"
bool itc_isDigit(unsigned char c){
    return (c >= '0' && c <= '9');
}



bool itc_compare(string s1, string s2){
if (itc_len(s1) != itc_len(s2)){
    return false;
}
long long i1 = 0, i2 = 0, n = 0;
while (s1[i1] != '\0' && s2[i2] != '\0'){
if (s1[i1] == s2[i2]){
    n++;
}
i1++;
i2++;
}
return n == itc_len(s1);
}

bool itc_isFirstInSecond(string s1, string s2){
if (itc_find_str(s2, s1) == -1)
    return false;
return true;
}

bool itc_isIp(string str){
unsigned int i = 0;
while (str[i] != '\0'){
    if((str[i] > '9' || str[i] < '0') && str[i] != '.'  )
        return false;
    i++;
    }
if (itc_len(str) > 15 || itc_count_char_in_str('.',str) != 3 || itc_max_char_on_end(str) > 3)
    return false;
while (itc_len(str) > 3){
if(string_number(itc_slice_str(str, 0, itc_find_str(str, ".") - 1)) > 255)
    return false;
str = itc_slice_str(str, itc_find_str(str, ".") + 1, itc_len(str) - 1);
}
if(string_number(str) > 255)
    return false;
return true;
}
