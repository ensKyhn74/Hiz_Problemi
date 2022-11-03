#include <stdio.h>
// x = V * t  yani  yol = hız * zaman  
// zaman = yol / hız
// Klavyeden yol ve hız değeri girilir,zaman hesaplanır

int main() 

{

 int yol;
 int hiz;
 
 printf("gideceginiz yol kac km?: ");
 scanf("%d",&yol);
 
 printf("kac km/saat hiz ile gidiyorsunuz?: ");
 scanf("%d",&hiz);
 
 double zaman = (double)yol / hiz;
 
 printf("%.1lf saatte gideceginiz lokasyona ulasacaksiniz.\n",zaman);
 
 return 0;

}