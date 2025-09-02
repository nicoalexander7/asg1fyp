#include <stdio.h>

int main(){
	
    int panjang;
    int lebar;
    int area;
    
    printf("Input panjang = ");
    scanf("%d", &panjang); getchar();
    printf("Input lebar = ");
    scanf("%d", &lebar); getchar();

    area = panjang * lebar; 

    printf("Area = %d\n", area); 

    return 0;
}
