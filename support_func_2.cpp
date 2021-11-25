#include "middle_str.h"
long long itc_len(string str){
 int i = 0, counter = 0;
 while (str[i] != '\0'){
    i++;
    counter++;
 }
 return counter;
 }

string itc_reverse_str(string str){
long long i = itc_len(str) - 1;
string str1 = "";
while (i >= 0){
    str1 += str[i];
    i--;
}
return str1;
}

int itc_len_num(long long number){
    int i = 0;
    while (number != 0){
        i = i + 1;
        number = number / 10;
    }
    return i;
}

int char_number(char c){
return c - '0';
}

char number_char(int n){
return 48 + n;
}
