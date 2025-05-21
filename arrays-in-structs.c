/*BECAUSE OF PASS BY VALUE OUR VALUES DOESN'T CHANGE*/

void timeChanger(struct timeData zaman) {
    int i;
    for(i=0;i<3;i++) {
        zaman.data[i] *=2;
    }
}


int main() 
{ 

    int i;
    struct timeData oglen = {{12,1,1}};
    timeChanger(oglen);
    for (i=0;i<3;i++) {
        printf("%d\n",oglen.data[i]);
    }
    
}



/*WE OVERCOME PASS BY VALUE BY POINTERS*/

void timeChanger(struct timeData* zaman) {
    int i;
    for(i=0;i<3;i++) {
        (*zaman).data[i] *=2;
    }
}


int main() 
{ 

    int i;
    struct timeData oglen = {{12,1,1}};
    timeChanger(&oglen);
    for (i=0;i<3;i++) {
        printf("%d\n",oglen.data[i]);
    }
    
}
