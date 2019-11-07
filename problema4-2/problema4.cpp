#include <iostream>
#define tipDate int
using namespace std;
int x,y,z;
struct nod
{
    tipDate info;
    nod* urm;
};
typedef nod* listaSimpla;
void valori(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;
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
void sorteaza(listaSimpla L) {
    listaSimpla p;
    listaSimpla q;
    listaSimpla r;
    r=L;
    p=r->urm;
    q=p->urm;
    valori(r->info,p->info,q->info);
    int ok=0;
    if (p==NULL)
        ok=1;
    while(ok==0)
    {
        r=L;
        p=r->urm;
        q=p->urm;
        valori(r->info,p->info,q->info);
        if(r->info>p->info)
        {
            r->urm=p->urm;
            p->urm=r;
        }
        r=L;
        p=r->urm;
        q=p->urm;
        valori(r->info,p->info,q->info);
        ok=1;
        while(q!=NULL)
        {
            if(q->info<p->info)
            {
                p->urm=q->urm;
                q->urm=p;
                r->urm=q;
                ok=0;
                valori(r->info,p->info,q->info);
            }
            q=q->urm;
            p=p->urm;
            r=r->urm;
            valori(r->info,p->info,q->info);
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
    cout<<"Afisare:\n"; sorteaza(L);
    return 0;
}
