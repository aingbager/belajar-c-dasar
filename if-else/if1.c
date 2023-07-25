#include <stdio.h>

int main(int argc, char *argv[]){
    //belajar if
    int a ;
    printf("masukan angka: ");
    scanf("%d",&a);

    if (a == 5){
        printf("ini 5\n");
    }else if(a == 7){
        printf("ini 7\n");
    }else{
        printf("bukan angka yang dicari\n");
    }

    return 0;
}
