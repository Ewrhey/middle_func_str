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













