#include <iostream>

using namespace std;
typedef int tipDate;
int s=0;
int nr=0;
int maxim=0;
int minim=9;
int sumaceruta=14;
int sumNivel[100];
int nrNivel[100];
struct nod {
    tipDate info;
    struct nod *st; struct nod *dr;
};
typedef nod * arbore;
int esteArboreNul(arbore a)
{
   return (a==NULL);
}

void initArbore(arbore& a)
{
   if (!esteArboreNul(a)) a=NULL;
}
bool adaugaLaArboreElement(arbore& a, tipDate el) {
    if (esteArboreNul(a)) {
        a=new nod;
        if (!a) return false;
        a->info = el; a->st = NULL; a->dr = NULL;
        return true;
    }
    else if (el < a->info)
        return adaugaLaArboreElement(a->st, el);
    else
        return adaugaLaArboreElement(a->dr, el);
}
void afisareString(arbore a)
{
    arbore p;
    if(!esteArboreNul(a))
    {
        cout<<"(";
        if(a->st!=NULL)
            {
                p=a->st;
                cout<<p->info;
            }
        cout<<"-";
        cout<<a->info;
        cout<<"-";
        if(a->dr!=NULL)
            {
                p=a->dr;
                cout<<p->info;
            }
        cout<<")";
        afisareString(a->st);
        afisareString(a->dr);

    }
}
int main()
{
    cout << "Arbori binari de cautare\n\n";
    arbore a; initArbore(a);
    unsigned int i; unsigned int n;
    tipDate x;
    cout<<"Dati numarul de elemente ale arborelui: "; cin>>n;
    for (i=1; i<=n; i++) {
        cout<<"Dati elementul al "<<i<<"-lea: ";
        cin>>x; adaugaLaArboreElement(a,x);
    }
    afisareString(a);
    return 0;
}
