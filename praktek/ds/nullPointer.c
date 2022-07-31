#include <stdio.h>

int main(){
    int *ptr = NULL;
    printf("%x\n",ptr); 
    // null pointer is used for menyimpan data kosong jika tidak ada memory yang valid dan handling error.return nya selalu 0
    return 0;
}