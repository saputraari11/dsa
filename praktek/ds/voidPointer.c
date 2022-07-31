#include <stdio.h>

int main() {
    int n = 10;
    void *ptr = &n;

    printf("%d\n",*(int*)ptr); // convert void to int
    printf("memory saved from void:%x,memory of n:%x\n",ptr,&n); // this is used of void pointer,it can be pointed to address of variable
    return 0;
}