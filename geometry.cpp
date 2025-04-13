#include <iostream>
#include <cmath>
using namespace std;
// struktura punkt
struct point
{
    double x;
    double y;
};

// dlugoœæ odcinka
double distance(point A, point B){
double d = sqrt(pow(A.x - B.x,2) + pow(A.y - B.y,2));
return d;
}

// czy punkty tworza trójk¹t
bool is_triangle(point A, point B, point C){
if(distance(A,B) + distance(C,B) > distance(A,C) && distance(A,C) + distance(C,B) > distance(A,B) && distance(A,C) + distance(A,B) > distance(B,C)){
return true;
    }else{
    return false;
    }
    }
// pole trójkata
double area_triangle(point A, point B, point C){
if(is_triangle(A,B,C) == true){
double a = distance(A,B);
double b = distance(B,C);
double c = distance(A,C);
double p = (a+b+c)/2;
double P = sqrt(p*(p-a)*(p-b)*(p-c));
return P;
}else{
return 0;
}
}

// pole wielokata wypuklego o n-katach
double area_polygon(point P[], int n){
double area = 0;
for(int i = 1; i <= n-2; i++){
if(area_triangle(P[0],P[i],P[i+1])!=0){
area += area_triangle(P[0],P[i],P[i+1]);
}else{
area = 0;
break;
}
}
return area;
}
// czy punkt D nalezy do trójkata ABC
bool is_inside(point A, point B, point C, point D){
if(area_triangle(A,B,D) + area_triangle(A,C,D) + area_triangle(C,B,D) == area_triangle(A,B,C)){
return true;
}else{
return false;
}
}
