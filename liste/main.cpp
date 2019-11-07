#include <iostream>
#define tipDate int
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
void afiseazaListaSimpla(listaSimpla L) {
    listaSimpla p; p=L;
    while (p!=NULL) {
        cout<<p->info<<", ";
        p=p->urm;
    }
    cout<<"\n";
}
void afiseazaSumaElementePare(listaSimpla L) {
    listaSimpla p; p=L; int s=0;
    while (p!=NULL) {
        if(p->info%2==0)
            s=s+p->info;
        p=p->urm;
    }
    cout<<s;
    cout<<"\n";
}
void afiseazaSumaElementeImpareintrePare(listaSimpla L) {
    listaSimpla p; p=L; int s=0; listaSimpla q=p->urm,r=q->urm;
    while (r!=NULL) {
        if(q->info%2==1&&p->info%2==0&&r->info%2==0)
            s=s+q->info;
        p=p->urm;
        q=q->urm;
        r=r->urm;
    }
    cout<<s;
    cout<<"\n";
}
void afiseazaListaDubla(listaSimpla L) {
    listaSimpla p; p=L; listaSimpla q;
    while (p!=NULL) {
            if(p->info%2==0&&L!=NULL)
            {
                q= new nod;
                q->urm=p->urm;
                q->info=p->info*2;
                p->urm=q;
                p=q->urm;

            }p=p->urm;


    }
    p=L;
    while (p!=NULL) {
        cout<<p->info<<", ";
        p=p->urm;
    }
    cout<<"\n";
}
void afiseazaListaFiltrata(listaSimpla L, int x) {
    listaSimpla p; p=L; listaSimpla q,r; q=p->urm;
    while(L->info==x)
            {
                p=L->urm;
                delete L;
                L=p;
            }
    while (q!=NULL) {

            if(q->info==x)
            {
                p->urm=q->urm;
                delete q;
                q=p->urm;

            }p=p->urm;
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
    cout<<"Afisare:\n"; afiseazaListaSimpla(L);
    afiseazaSumaElementePare(L);
    afiseazaSumaElementeImpareintrePare(L);
    afiseazaListaDubla(L);
    afiseazaListaFiltrata(L, 3);
    return 0;
}
