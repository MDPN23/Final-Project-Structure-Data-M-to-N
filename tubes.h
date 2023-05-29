#ifndef TUBES_H_INCLUDED
#define TUBES_H_INCLUDED

#include<iostream>

#define info(P) (P)->info
#define next(P) (P)-.next
#define nextMatkul(M) ((M)->nextMatkul)
#define first(Rel) -> ((Rel)->first)


using namespace std;

struct Mhs{
    string namaMhs;
    double IPK;
    int maxMatkul;
};

struct Matkul{
    string namaMatkul;
    string namaDosen;
    string kelas;
};

typedef struct elmMhs *adrP;
typedef struct elmMatkul *adrM;

struct elmMhs{
    Mhs info;
    adrP next;
    adrM nextMatkul;
};

struct elmMatkul{
    Matkul info;
    adrM next;
};

struct Rel{
    adrP next;
    adrM next;
};


#endif // TUBES_H_INCLUDED
