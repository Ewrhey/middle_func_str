#include "middle_str.h"

long long string_number(string str){
long long i = 0, n = 0;
while (str[i] != '\0'){
    n = n * 10;
    n += char_number(str[i]);
    i++;
}
return n;
}

string number_string(long long n){
string str = "";
bool test = n < 0;
if (n == 0)
    return "0";
if (n < 0)
    n = n * -1;

while (n > 0){
str += number_char(n % 10);
n = n/10;
}
str = itc_reverse_str(str);
if (test)
    str = '-' + str;
return str;
}

int itc_find_str(string s1, string iscomoe){
string s3;
int i1 = 0, i2 = 0, i;
long long len2;
 while (s1[i1] != '\0'){
 if (s1[i1] == iscomoe[i2]){
    i = 0;
    len2 = itc_len(iscomoe);
    s3 = "";
    while ( i < len2){
        s3 += s1[i1 + i];
        i++;
    }
    if (s3 == iscomoe){
        return i1;
    }
 }
 i1++;
 }
return -1;
}

string itc_slice_str(string str, int start, int end_){
if(end_ < start){
    return str;
}
else if(end_ > itc_len(str)-1){
    end_ = itc_len(str)-1;
}
string str1 = "";
while (start <= end_){
    str1 += str[start];
    start ++;
}
return str1;
}

int itc_max_char_on_end(string str){
    long long max_number = 0, counter = 0, i = 0;
    while (i <= itc_len(str)){
        if (str[i] >= '0' || str[i] <= '9'){
            counter++;
        }
        if (str[i] < '0' || str[i] > '9'){
            if (max_number < counter){
            max_number = counter;
            }
        counter = 0;
        }
    i++;
    }
    return max_number - 1;
}

