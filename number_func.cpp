#include "middle_str.h"
int itc_countWords(string str)
{
	 bool test = true;
    long long len = 0, cnt = 0;
    if (str == "")
        return 0;
    for (long long i = 0; str[i] != '\0'; i++){
        if (('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z')){
            len++;
        }
        else{
            if (str[i] == ' '){
                test = true;
				}
            if (len > 0 && str[i] == ' '){cnt++;}
            len = 0;
        }
    }
    if (len > 0){cnt++;}
    if (test == false)
        return 0;
    return cnt;
}
