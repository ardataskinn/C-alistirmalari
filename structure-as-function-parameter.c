*/ METHOD 1 Struct verilerini fonksiyona ayrı ayrı gönderme sanki ortada struct yokmuş gibi */


int is_inside(float px,float py,float cr,float cox,float coy) {
    float uzunluk = sqrt(((cox-px)*(cox-px)) + ((coy-py)*(coy-py)));

    if (uzunluk > cr) {
        return 0;
    } else {
        return 1;
    }
    }


int main() 
{ 
    struct point
    {
        float x;
        float y;
    };
    
    struct circle {
        float r;
        struct point o;
    };

    struct point nokta = {0,0};
    struct circle cember = {2,{1,2}};

    printf("%d",is_inside(nokta.x,nokta.y,cember.r,cember.o.x,cember.o.y));
}



/* METHOD 2 Struct veri tiplerini gönder fonksiyon içine         */

struct point
{
    float x;
    float y;
};
    
struct circle {
    float r;
    struct point o;
};

int is_inside(struct point nokta,struct circle daire) {
    float uzunluk = sqrt(((daire.o.x - nokta.x)*(daire.o.x - nokta.x)) + ((daire.o.y-nokta.y)*(daire.o.y-nokta.y)));
    if (uzunluk > daire.r) {
        return 0;
    } else {
        return 1;
    }
    }

int main() 
{ 
    struct point nokta = {0,0};
    struct circle cember = {2,{1,2}};

    printf("%d",is_inside(nokta,cember));
}


/*METHOD 3 STRUCTURE'I POINTER OLARAK GONDER*/

struct point
{
    float x;
    float y;
};
    
struct circle {
    float r;
    struct point o;
};

int is_inside(struct point *nokta,struct circle *daire) {
float uzunluk = sqrt((((*daire).o.x - (*nokta).x) * ((*daire).o.x - (*nokta).x)) + (((*daire).o.y - (*nokta).y) * ((*daire).o.y - (*nokta).y)));
    if (uzunluk > (*daire).r) {
        return 0;
    } else {
        return 1;
    }
    }

int main() 
{ 
    struct point nokta = {0,0};
    struct circle cember = {2,{1,2}};

    printf("%d",is_inside(&nokta,&cember));
}

