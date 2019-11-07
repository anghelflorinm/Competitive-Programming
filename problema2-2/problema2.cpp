#include <iostream>
#define tipDate float
using namespace std;
struct nod
{
    tipDate info;
    nod* urm;
};
typedef nod* listaSimpla;
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
void afiseazaListaMedie(listaSimpla L) {
    listaSimpla p; p=L; listaSimpla q, r;
    q=p->urm;
    while (q!=NULL) {

            r=new nod;
            r->info=(p->info+q->info)/2;
            r->urm=q;
            p->urm=r;
            p=q;
            q=q->urm;
    }
    p=L;
    while (p!=NULL) {
        cout<<p->info<<", ";
        p=p->urm;
    }
    cout<<"\n";
}

int main()
{
    cout<<"Program cu liste\n\n"; listaSimpla L;
    cout<<"Citire:\n"; citesteListaSimpla(L);
    cout<<"Afisare:\n";
    afiseazaListaMedie(L);
    return 0;
}
