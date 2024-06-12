#include <stdio.h>

struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{
    struct Mahasiswa mhs1, mhs2;

    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 22;
    mhs2.name = "Bambang";
    mhs2.address = "Surabaya";
    mhs2.age = 23;
    
    printf("## Mahasiswa 1 ##\n");
    printf("nama: %s\n", mhs1.name);
    printf("alamat: %s\n", mhs1.address);
    printf("umur: %d\n", mhs1.age);
    printf("## Mahasiswa 2 ##\n");
    printf("nama: %s\n", mhs2.name);
    printf("alamat: %s\n", mhs2.address);
    printf("umur: %d\n", mhs2.age);
    return 0;
    

}