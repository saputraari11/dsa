#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,n;    
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    int *ptr = (int*)malloc(n*sizeof(int));
    printf("alamat of ptr is %x and value is %d\n",ptr+1,*(ptr+1));
    // for(i=0;i<n;i++){
    //     *(ptr+i) = i;
    // }

    *(ptr+5) = 100;
    
    for(i=0;i<n;i++){
        printf("alamat of ptr is %x and value is %d\n",ptr+i,*(ptr+i));
    }
    printf("alamat of ptr is %x and value is %d\n",ptr+5,*(ptr+5));
    return 0;
}