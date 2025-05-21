struct student {
    char name[20];
    int grades[2];
};


int main() 
{ 

    struct student ogrenciler[3] = {{"arda",{2,2}},{"musa",{3,5}},{"ilme",{7,6}}};

    printf("%s",ogrenciler[2].name);
}
