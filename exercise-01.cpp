/*
Nama Program    : exercise-01
Nama            : Fauzan Akmal Hariz
NPM             : 140810180005
Tanggal buat    : 12 Maret 2019
Deskripsi       : Praktikum
*/

#include <iostream>
#include <math.h>

using namespace std;

typedef struct{
    float panjang;
    float lebar;
} segiempat;

void input(segiempat *s)
{
    cout<<"Silahkan masukan panjang : "; cin>>s->panjang;
    cout<<"Silahkan masukan lebar   : "; cin>>s->lebar;
}

float keliling(segiempat s)
{
    return (2*s.panjang)+(2*s.lebar);
}

float luas(segiempat s)
{
    return (s.panjang*s.lebar);
}

float diagonal(segiempat s)
{
   return sqrt((s.panjang*s.panjang)+(s.lebar*s.lebar));
}

void print(segiempat s)
{
    cout<<endl;
    cout<<"Keliling              : " <<keliling(s) <<endl;
    cout<<"Luas                  : " <<luas(s) <<endl;
    cout<<"Diagonal              : " <<diagonal(s) <<endl;
}

int main()
{
    segiempat* sg;
    sg = new segiempat;
    input(sg);
    print(*sg);
}
