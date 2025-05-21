#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int size_finder(char* oge) {
    int i;
    for (i=0;oge[i]!='\0';i++);
    return i+1;
}


int main() 
{ 
    const char *kaynakDizi[] = {"lateral", "motion", "vector", "dynamic", "array"};
    int adet = 5;
    int i;
    char **yeni_dizi = (char**)malloc(sizeof(char*)*adet);
    for (i = 0;i < adet;i++) {
        yeni_dizi[i] = (char*)malloc(sizeof(char)*size_finder(kaynakDizi[i]));
        strcpy(yeni_dizi[i],kaynakDizi[i]);
    }

    for (i=0;i<adet;i++) {
        printf("%s\n",yeni_dizi[i]);
        free(yeni_dizi[i]);
    }

    free(yeni_dizi);

    

}
