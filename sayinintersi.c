/*Bir sayının tersini bulma algoritması*/

/*Benim çözümüm*/

#include <stdio.h>
int main(void) {
    int number;

    scanf("%d",&number);
    int number_gecici = number;
    int reverse = 0;
    int basamak_sayi = 0;


    while (number_gecici > 0)
    {
        number_gecici = number_gecici / 10;
        basamak_sayi = basamak_sayi + 1;
    }

    while (basamak_sayi > 0)
    {
        int gecici_basamak_sayi = basamak_sayi;
        int gecici_carpan = 1;
        while (gecici_basamak_sayi > 0)
        {
            gecici_carpan *= 10;
            gecici_basamak_sayi -= 1;
        }

        reverse = reverse + ((number % 10)*gecici_carpan);
        number /=10;
        basamak_sayi-=1;
        

        
    }
    printf("%d",reverse/10);

    
}


/*CHATGPT ÇÖZÜMÜ ALTTAKİ*/



#include <stdio.h>

int main(void) {
    int number;

    scanf("%d", &number);
    int reverse = 0;

    while (number > 0) {
        reverse = reverse * 10 + (number % 10);
        number /= 10;
    }

    printf("%d", reverse);

    return 0;
}
