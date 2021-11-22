#include "middle_str.h"
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
