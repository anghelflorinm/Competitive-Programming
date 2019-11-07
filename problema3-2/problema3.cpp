#include <iostream>
#define tipDate int
using namespace std;
struct nod
{
    tipDate info;
    nod* urm;
};
typedef nod* listaSimpla;
bool numarPalindrom(int numar)
{
    int numarInitial, numarInvers = 0;
    numarInitial = numar;
    while(numar)
    {
        int c = numar % 10;
        numarInvers = numarInvers * 10 + c;
        numar = numar / 10;
    }
    if(numarInitial == numarInvers)
        return true;
    else
        return false;
}
void citesteListaSimpla(listaSimpla& L) {
    unsigned int nrElemente;
    cout<<"Dati numarul de elemente: ";
    cin>>nrElemente;
    tipDate element;
    L=NULL; listaSimpla p;
    for (unsigned int i=1; i<=nrElemente; i++)
    {
        cout<<"Dati elementul al "<<i<<"-lea: ";
        cin>>element; p=new nod; p->info=element;
        p->urm=L;L=p;
    }
}
void afiseazaListaSimpla(listaSimpla L) {
    listaSimpla p; p=L;
    while (p!=NULL) {
        cout<<p->info<<", ";
        p=p->urm;
    }
    cout<<"\n";
}
bool verificaSimetrie(listaSimpla L) {
    listaSimpla p;
    p=L;
    int v[100];
    int i=0;
    int lungime=0;
    while (p!=NULL) {
        lungime++; i++;
        v[i]=p->info;
        p=p->urm;
    }
    for(i=1;i<=lungime/2;i++)
        if(v[i]!=v[lungime-i+1])
            return false;
            return true;
}


int main()
{
    cout<<"Program cu liste\n\n"; listaSimpla L;
    cout<<"Citire:\n"; citesteListaSimpla(L);
    cout<<"Afisare:\n";
    if(verificaSimetrie(L))
        cout<<"Lista este simetrica";
    else cout<<"Lista nu este simetrica";
    return 0;
}
