#include<stdio.h>
int main ()
{
int NUTS, NUAS, nilaiAkhir;
NUTS = 80;
NUAS = 60;
if(NUTS>70){
printf("NA adalah %d\n",NUTS);
printf("Lulus");
}else{
nilaiAkhir =(NUTS*0.4)+(NUAS*0.6);
printf("NA adalah %d\n",nilaiAkhir);
if(nilaiAkhir>=60)
printf("Lulus");
else
    printf("Tidak Lulus");
}
return 0;
}



