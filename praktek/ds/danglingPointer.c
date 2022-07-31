#include <stdio.h>
#include <stdlib.h>

// ini memory dinamis
// tempatnya di segment heap
int main(){ 
    int* i = (int *)malloc(sizeof(int)); // void atau alamat yang siap menyimpan nilai,tapi harus dikonversi dulu menjadi tipe data yang akan digunakan,ini simplenya membuat dan menyimpan
    int* x;
    *i = 10;
    printf("alamat of i is %x and value is %d\n",i,*i);
    free(i); // menghapus penyimpanan memory dengan cara mengosongkan nilai tersebut atau secara singkat jadiin null
    printf("alamat of i is %x and value is %d\n",i,*i); // after, memory jadi null
    x = (int*)malloc(sizeof(int)); // mengambil memory yang tersedia dengan nilai null atau kosong
    *x = 7;
    printf("alamat of x is %x and value is %d\n",x,*x);
    free(i);
    // dangling pointer dapat memakai memory yang sudahh tidak dipakai atau memory yang tersedia dengan value null
    // benefit nya kita bisa membuat variable baru dengan nama yang berbeda tetapi tidak menambah storage di memory atau menggunakan sisa alamat memory yang tidak digunakan
    // weekness nya kita tidak bisa mendapat kan nilai memory sebelumnya atau menggunakan nilai memeory sebelumnya

    // goalsnya kalau memory sudah tidak digunakan maka kita kosongkan dan isi alamat tersebut lagi
    return 0;
}