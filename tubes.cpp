#include"tubes.h"

void createListMhs(Rel &LMhs){
    first(LMhs) = NULL;
}

adr newElm_Mhs(Mhs info, adrP &P){
    adrP P = new elmMhs;
    info(Mhs) = info;
    info(Mhs).IPK = 0;
    if(info(Mhs).IPK >= 3.5){
        info(Mhs).maxMatkul = 4;
    }
    else if(info(Mhs).IPK >= 3){
        info(Mhs).maxMatkul = 3;
    }
    else{
        info(Mhs).maxMatkul = 2;
    }
    nextMatkul(Mhs) = NULL;
    next(Mhs) = NULL;
    return P;
}

void insertLast_Mhs(Rel &LMhs, adrP &P){
    if(first(LMhs)==NULL){
        first(LMhs) = P;
        next(LMhs) = first(LMhs);
        P = NULL;
    }
    else{
        adrP Q = first(LMhs);
        while(next(Q) != first(LMhs)){
            Q = next(Q);
        }
        next(P) = first(LMhs);
        next(Q) = P;
    }
}

void deleteFirst_Mhs(Rel &LMhs, adrP &P){
    if(next(first(LMhs)) == first(LMhs)){
        P = first(LMhs);
        next(P) = NULL;
        first(L) = NULL;
    }
    else{
        adrP Q = first(LMhs);
        while(next(Q) != first(LMhs)){
            Q = next(Q);
        }
        P = first(LMhs);
        next(Q) = next(P);
        first(LMhs) = next(P);
        next(P) = NULL;
    }
}

void showMhs(Rel LMhs){
    if(first(LMhs)==NULL){
        cout<<"Tidak ada Mahasiswa \n";
    }
    else{
        adrP P = first(LMhs);
        cout<<"Nama Mahasiswa: "<<info(P).namaMhs<<endl;
        cout<<"IPK: "<<info(P).IPK<<endl;
        cout<<"Max Matkul: "<<info(P).maxMatkul<<endl;
        P = next(P);
        cout<<endl;

        while(P != first(LMhs)){
            cout<<"Nama Mahasiswa: "<<info(P).namaMhs<<endl;
            cout<<"IPK: "<<info(P).IPK<<endl;
            cout<<"Max Matkul: "<<info(P).maxMatkul<<endl;
            P = next(P);
            cout<<endl;
        }
    }
}

adrP findElementMhs(Rel Mhs, string namaMhs, double IPK){
    if(first(LMhs) != NULL){
        adrP P = first(L);
        do{
            if(info(P).namaMHs == namaMhs && info(P).IPK == IPK){
                return P;
            }
            P = next(P);
        }
        while(P != first(L));
        return NULL;
    }
}


void newElm_Matkul(LMatkul X){
    adrM N = new elmMatkul;
    info(N) = X;
    next(N) = NULL;
    return N;

}

void insertLast_Matkul(Rel &Matkul, adrP &M){
    if(first(Matkul)==NULL){
        first(Matkul) = M;
        next(Matkul) = first(Matkul);
        M = NULL;
    }
    else{
        adrM Q = first(Matkul);
        while(next(Q) != first(Matkul)){
            Q = next(Q);
        }
        next(M) = first(Matkul);
        next(Q) = M;
    }
}

void deleteFirst_Matkul(Rel &Matkul, adrP &M){
    if(next(first(Matkul)) == first(Matkul)){
        M = first(Matkul);
        next(M) = NULL;
        first(L) = NULL;
    }
    else{
        adrP Q = first(Matkul);
        while(next(Q) != first(Matkul)){
            Q = next(Q);
        }
        M = first(Matkul);
        next(Q) = next(M);
        first(Matkul) = next(M);
        next(M) = NULL;
    }
}

void showMhs(Rel Matkul){
    if(first(Matkul)==NULL){
        cout<<"Tidak ada Matakuliah \n";
    }
    else{
        adrM N = first(Matkul);
        cout<<"Nama Mata Kuliah: "<<info(N).namaMatkul<<endl;
        cout<<"Nama Dosen: "<<info(N).namaDosen<<endl;
        cout<<"kelas Mata Kuliah: "<<info(N).kelas<<endl;
        M = next(M);
        cout<<endl;

        while(P != first(Matkul)){
            cout<<"Nama Mata Kuliah: "<<info(N).namaMatkul<<endl;
            cout<<"Nama Dosen: "<<info(N).namaDosen<<endl;
            cout<<"Kelas Mata Kuliah: "<<info(N).kelas<<endl;
            M = next(M)
            cout<<endl;
        }
    }
}

adrP findElementMatkul(Rel Matkul, string namaMatkul, string namaDosen){
    if(first(Matkul) != NULL){
        adrM N = first(L);
        do{
            if(info(N).namaMatkul == namaMatkul && info(N) == namaDosen){
                return N;
            }
            N = next(N);
        }
        while(N != first(LMatkul));
        return NULL;
    }
}
