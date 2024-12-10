#include <stdio.h>
void soHoanhao(int a){
		int count=0;
        for(int i=1; i<=a/2; i++){
		    if( a % i ==0){
		        count+= i;
       	    }
		}
	    if(count==a){
            printf("%d la SO HOAN HAO\n", a);
		}else {
        	printf("%d khong phai la SO HOAN HAO\n", a);
    	}
}
int main(){
	int num1,num2;
	printf("Moi ban nhap so nguyen thu nhat: ");
    scanf("%d", &num1);
    printf("Moi ban nhap so nguyen thu hai: ");
    scanf("%d", &num2);
    
    soHoanhao(num1);
    soHoanhao(num2);
   
	return 0;
}

