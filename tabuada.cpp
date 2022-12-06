#include <stdio.h>
#include <locale.h>


int main() {
      setlocale(LC_ALL,"Portuguese_Brazil");

   
   
         int i, mult,r; 
      
for(int i=1; i<=10; i++){
   for(int mult=1; mult<=10;mult++){
r=mult*i;
    printf("'%d  x %d'=%d",i, mult,r);
}   
    }     
        
         
        
   
     
    
    
    
    
    
  
    


    return 0;
}

    