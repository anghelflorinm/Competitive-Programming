#include <iostream>
#include <graphics.h>
#include<winbgim.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x = 320, y = 240, r;
    for (r = 25; r <= 125; r += 20)
      circle(x, y, r);


    cout << "Hello world!" << endl;
    getch();
    closegraph();
    return 0;
}
