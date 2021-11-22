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

long long string_number(string str){
long long n1 = 0, i = 0, raz = 1, n = 0;
while (str[i] != '\0'){

if (str[i] == '0'){
    n1 = n1 * raz;
}

else if (str[i] == '1'){
    n1 += 1 * raz;
}

else if (str[i] == '2'){
    n1 += 2 * raz;
}

else if (str[i] == '3'){
    n1 += 3 * raz;
}

else if (str[i] == '4'){
    n1 += 4 * raz;
}

else if (str[i] == '5'){
    n1 += 5 * raz;
}

else if (str[i] == '6'){
    n1 += 6 * raz;
}

else if (str[i] == '7'){
    n1 += 7 * raz;
}

else if (str[i] == '8'){
    n1 += 8 * raz;
}

else if (str[i] == '9'){
    n1 += 9 * raz;
}

raz = raz * 10;
i++;

}

while (n1 > 0){
n = 10*n + n1%10;
n1 = n1 / 10;
}

while (itc_len_num(n) < itc_len(str)){
    n = n * 10;
}
return n;
}

string number_string(long long n){
string str = "";
int a = 0;
while (n > 0){

a = n%10;

if (a == 0){
    str += '0';
}

else if (a == 1){
    str += '1';
}

else if (a == 2){
    str += '2';
}

else if (a == 3){
    str += '3';
}

else if (a == 4){
    str += '4';
}

else if (a == 5){
    str += '5';
}

else if (a == 6){
    str += '6';
}

else if (a == 7){
    str += '7';
}

else if (a == 8){
    str += '8';
}

else if (a == 9){
    str += '9';
}

n = n/10;

}

str = itc_reverse_str(str);

return str;
}

int itc_find_str(string s1, string s2){
string s3;
int i1 = 0, i2 = 0, i;
long long len2;
 while (s1[i1] != '\0'){
 if (s1[i1] == s2[i2]){
    i = 0;
    len2 = itc_len(s2);
    s3 = "";
    while ( i < len2){
        s3 += s1[i1 + i];
        i++;
    }
    if (s3 == s2){
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


bool sup_3raz_number(string str){
if ((itc_len(str) >0 && itc_len(str) <= 3) && (itc_max_char_on_end(str) == itc_len(str))){
    return true;
}
return false;
}




