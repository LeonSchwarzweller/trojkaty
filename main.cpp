#include <iostream>
#include "geometry.h"

using namespace std;

int main()
{
    point A = {1, 2};
    point B = {3, 4};
    ///cout << distance(A, B) << endl;
    point P[5] = {{0, 0}, {0, 3}, {6, 0}, {3, 6}, {4, 6}};

    cout << is_triangle(P[0],P[1], P[2])<< endl;
    cout << area_triangle(P[0],P[1], P[2]) << endl;
    cout << area_polygon(P,5) << endl;
    return 0;
}
