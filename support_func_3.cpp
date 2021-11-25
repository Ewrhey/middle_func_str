#include "middle_str.h"

string itc_three_str(string str1, string str2, string str3){
string str, str_sup;
long long index = itc_find_str(str1, str2), sup;
while(index != -1){
    str_sup = itc_slice_str(str1, 0, index - 1);
    if (index == 0)
        str_sup = "";
    sup = itc_len(str_sup);
    str_sup += str3;
    str1 = str_sup + itc_slice_str(str1, sup + itc_len(str2), itc_len(str1));
    index = itc_find_str(str1, str2);
}
return str1;
}


int itc_count_char_in_str(char ch, string str){
 int i = 0, counter = 0;
while (str[i] != '\0'){
    if (str[i] == ch){
        counter++;
    }
    i++;
 }
return counter;
 }
