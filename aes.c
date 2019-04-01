#include <stdio.h>
#include <stdlib.h>

int main(){
    //the current code is for 16 byte plaintext and 16 byte key, the code will be further improved upon by adding support for 16*n byte plaintexts as well.
    char *plaintext="this aint a game";
    char *key="2b7e151628aed2a6";
    char *expandedkey=keyExpansion((char*)key);
    char cipher[strlen(plaintext)+50];
    char plain[strlen(plaintext)+50];
    
    
    return 0;

}