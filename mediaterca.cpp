#include <stdio.h>
#include <locale.h>


int main() {
      setlocale(LC_ALL,"Portuguese_Brazil");

   
   
         float n1, n2,n3, media; 
      

    printf("Coloque a sua primeira nota");     
        scanf("%f",&n1);
   printf("coloque a sua segunda nota");
   scanf("%f",&n2);
printf("coloque a sua terceira nota");
scanf("%f",&n3);

media=(n1+n2*2+n3*3)/7;
printf("A media foi de %f\n", media);
     if(media >=9.0){
     printf("A\n");
}else if(media >=7.5 &&  9.0){
         printf("B\n");
}else if(media >=6.0 && 7.5){
         printf("C\n");
}else if(media<6.0){
         printf("D\n");
}
    
    
    
    
    
  
    


    return 0;
}

    