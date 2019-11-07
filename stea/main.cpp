#include <iostream>
#include <math.h>
#include <winbgim.h>
using namespace std;


// programul poate fi testat in DevC++, instaland biblioteca grafica WinBGIm
// sau in Processing 3.0
// folosind functiile grafice specifice

// presupunem ca dispunem de urmatoarele functii grafice

void setcolor(unsigned int c)
{
    // stabileste culoarea pentru a desena urmatoarele linii,
    // pana la schimbarea culorii de un alt apel al acestei functii (initial se considera c=0, implicit);
    // c este un cod de culoare, care corespunde unei valori între 0 si 15, de exemplu 0=negru, 1=albastru, 2=rosu etc.
}

void setwidth(unsigned int g)
{
    // stabileste grosimea (1<=g<=10, implicit g=1) de desenare a
    // a urmatoarelor linii, pana la un nou apel al acestei functii;
}

void line(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2)
{
    // deseneaza/traseaza o linie intre punctul de coordonate (x1, y1)
    // si cel de coordonate (x2, y2), in culoarea curenta, de grosimea curenta,
    // adica cele stabilite de functiile de mai sus
}

void setfillcolor(unsigned int c)
{
    // stabileste culoarea de umplere pentru urmatoarele apeluri ale functiei fill
    // de mai jos; c este implicit 0 (negru), dar poate fi orice valoarea 0<=c<=15;
}

void fill_(unsigned int x1, unsigned int x2, unsigned int c)
{
    // coloreaza (prin umplere) in culoarea stabilita de functia setfillcolor,
    // conturul inchis, marginit de o linie poligonala inchisa, avand culoarea c;
    // colorarea incepe in punctul de coordonate (x1, y1), care se presupune a fi
    // in interiorul acelei linii poligonale.
}

struct stea
{
    int xCentru, yCentru; // xc si yc sunt coordonatele centrului stelei,
    // adica ale cercurilor circumscrise celor doua poligoane regulate, formate din colturile stelei,
    // respectiv din punctele interioare
    int nrColturi; // nr de colturi ale stelei
    int raza; // raza cercului mare (unde se afla colutile stelei
    float coef; // un numar subunitar, reprezentand raportul dintre raza mica
    // si raza mare (acest coeficient determina automa cat de "deschisa"
    // sau de "colturoasa" este steaua
    float unghiRotire; // unghiul dintre dreapta Ox si
    // dreapta formata din centrul stelei si primul colt al stelei
    int culoareMargine; // culoarea marginii
    int grosimeMargine; //grosimea marginii
    int culoareStea; // culoarea interiorului stelei, fara margine
};

void deseneaza(stea Stea)
{
    // folosim variabile locale, cu denumiri scurte, le initializam
    int xc=Stea.xCentru;
    int yc=Stea.yCentru;
    int n=2*Stea.nrColturi;
    int r=Stea.raza;
    float gama=Stea.unghiRotire;
    // calculam raza pentru cercul format de punctele interioare stelei
    int r2=r*Stea.coef;
    // stabilim elementele de desenare
    // setcolor(Stea.culoareMargine); setwidth(Stea.grosimeMargine);
    // calculam unghiul facut de axa OX cu fiecare dintre punctele ce formeaza steaua (fie ca sunt colturi, fie puncte interioare)
    float alfa=2*3.1415926/n; // pi/n


    // folosim doi vectori pentru a pastra in ei coordonatele punctelor din stea
    // (exterioare si interioare)
    // se poate evita folosirea vectorilor,
    // prin memorarea doar a ultimelor doua puncte ale liniei poligonale
    // sau, daca e necesar, se pot memora coordonatele acestor puncte
    // chiar in definitia stelei

#define MAX_PUNCTE 100
    int x[MAX_PUNCTE];
    int y[MAX_PUNCTE];
    int i;
    for (i=0; i<=n; i++)
    {
        if (i%2!=0)
        {
            x[i]=int(xc+r2*cos(alfa*i+gama));
            y[i]=int(yc+r2*sin(alfa*i+gama));
        }
        else
        {
            x[i]=int(xc+r*cos(alfa*i));
            y[i]=int(yc+r*sin(alfa*i));
        }
    }
    for (i=0; i<=n-1; i++)
    {
        line(x[i],y[i],x[i+1],y[i+1]);
    }
    // umplem steaua, plecand din centrul ei
    setfillcolor(Stea.culoareStea);
    fill_(Stea.xCentru,Stea.yCentru,Stea.culoareMargine);
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    // exemplu de initializare a unei stele
    stea S;
    S.xCentru=250;
    S.yCentru=200; // coordonate centru stea
    S.nrColturi=3; // o stea cu 5 colturi
    S.unghiRotire=100; // aproximativ pi/4
    S.raza=150; // raza cercului format de colturi va fi 200;
    S.coef=0.3; // punctele interioare vor forma un cerc de raza jumatate din S.raza
    S.culoareMargine=2; // culoarea marginii va fi, de exemplu, rosu
    S.grosimeMargine=3; //grosimea marginii de 3 pixeli
    S.culoareStea=14;// culoarea stelei va fi, de exemplu, galben
    // exemplu program de test
    deseneaza(S);
    cout << "Atentie! Programul cu stea poate fi testat ";
    cout<<"daca dispuneti de acele functii grafice!" << endl;
    getch();
    closegraph();


    return 0;
}
