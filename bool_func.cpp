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
if (itc_find_str(s2, s1) != -1){
    return true;
}
return false;
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