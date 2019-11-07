#include <iostream>
#define tipDate int
using namespace std;
int estePrim(int n)
{
    if(n==0) return 0;
    if(n==1) return 0;
    if(n==2) return 1;
    for(int i=2;i<=n/2;i++)
        if(n%i==0)
            return 0;
    return 1;
}
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
void afiseazaListaFiltrata(listaSimpla L) {
    listaSimpla p; p=L; listaSimpla q,r; q=p->urm;
    while(estePrim(L->info))
            {
                p=L->urm;
                delete L;
                L=p;
            }
            q=p->urm;
    while (q!=NULL) {

            if(estePrim(q->info))
            {
                p->urm=q->urm;
                delete q;
                q=p->urm;

            }
            else
                {
                    p=p->urm;
                    q=q->urm;
                }




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
    afiseazaListaFiltrata(L);
    return 0;
}
