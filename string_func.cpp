#include "middle_str.h"

bool itc_isDigit(unsigned char c){
    return (c >= '0' && c <= '9');
}

unsigned char itc_toUpper(unsigned char c){
if (c >= 'a' && c <= 'z'){
    return itc_changeCase(c);
}
return c;
}

unsigned char itc_changeCase(unsigned char c){
if (c >= 'a' && c <= 'z'){
    c = c - 32;
    return c;
}
else if (c >= 'A' && c <= 'Z'){
    c = c + 32;
    return c;
}

return c;
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
return n = itc_len(s1);
}

int itc_countWords(string str){





}


char itc_sameChar(string str){
char itog;
for (int i = 0; str[i] != '\0'; i++){
    for (int i1 = i + 1; str[i1] != '\0'; i1++){
                if (str[i1] == str[i]){
                    return str[i1];
                }
    }
}
return '0';
}
bool itc_isFirstInSecond(string s1, string s2){
if (itc_find_str(s2, s1) != -1){
    return true;
}
return false;
}

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

bool itc_isIp(string str){
int i = 0, f;
long long num;
string sup = "";
if (itc_len)
while (itc_isFirstInSecond(".", str)){
        //                                                                                                    cout << "\n"<<endl;
    f = itc_find_str(str, ".");
    //                                                                                                    cout << f << endl;
    if (f > 1){sup = itc_slice_str(str, 0, f - 1);}
    else if (f == 1) {sup = +str[0];}
    //                                                                                                    cout << sup << endl;
    //                                                                                                    cout << "len = " << itc_len(sup) << endl;
    //                                                                                                    cout << "max_char = " << itc_max_char_on_end(sup) << endl;
    if (sup_3raz_number(sup)){
        //                                                                                                    cout << "in if ______" << endl;
        if (sup != "0"){num = string_number(sup);}
        else if( sup == "0"){num = 0;}
        //                                                                                                    cout << num << endl;
        if (num >= 0 && num <= 255){
            i++;
        }
    }
    str = itc_slice_str(str, f + 1, itc_len(str));
    //                                                                                                    cout << "str" << str << endl;
}
if (sup_3raz_number(str)){
        //                                                                                                    cout << "in if ______" << endl;
    if (str != "0"){num = string_number(str);}
    else if( str == "0"){num = 0;}
        //                                                                                                    cout << num << endl;
    if (num >= 0 && num <= 255){
        i++;
    }
}
if (i == 4){
    return true;
}
return false;
}


string itc_decToBase(int num, int base){
string str;
int a = 0;
while (num > 0){

a = num % base;

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

else if (a == 10){
    str += 'A';
}

else if (a == 11){
    str += 'B';
}

else if (a == 12){
    str += 'C';
}

else if (a == 13){
    str += 'D';
}

else if (a == 14){
    str += 'E';
}

else if (a == 15){
    str += 'F';
}

num = num / base;

}

str = itc_reverse_str(str);

return str;
}













