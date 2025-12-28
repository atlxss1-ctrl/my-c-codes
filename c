#include <stdio.h>

int main() {
    int i, adet;
    
    // Standart Fibonacci Başlangıcı: 0 ve 1
    int t1 = 0; 
    int t2 = 1;
    int sonrakiSayi;

    printf("Kac adet Fibonacci sayisi gosterilsin: ");
    scanf("%d", &adet);

    printf("Fibonacci Serisi:\n");

    for (i = 1; i <= adet; i++) 
    {
      
        printf("%d, ", t1);

        
        sonrakiSayi = t1 + t2;

       
        t1 = t2;            
        t2 = sonrakiSayi;  
    }
    
    return 0;
}
