struct rectangular {
    float x;
    float y;
};

struct polar {
    float r;
    float theta;
};

struct polar convert(struct rectangular kare) {
    struct polar polarlik;

    polarlik.r = sqrt(((kare.x)*(kare.x) + (kare.y)*(kare.y)));
    polarlik.theta = atan2f(kare.y,kare.x);
    return polarlik;
}

int main() 
{ 
    struct rectangular karem = {3,4};   
    struct polar kalem = convert(karem);

    printf("%f",kalem.r);

}
