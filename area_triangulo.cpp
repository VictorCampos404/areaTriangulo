#include <stdio.h>

int areaTriangulo(int[2], int[2], int[2]);
int det(int[3], int[3], int[3]);
int modulo(int);

int main(){
	int p1[2] = {-4, 2}; 
	int p2[2] = { 2, 3};
	int p3[2] = {-2,-2};	
	
	printf("Area Triangulo: %i", areaTriangulo(p1,p2,p3));
}

int areaTriangulo(int p1[2], int p2[2], int p3[2]){
	int a[3] = {p1[0], p1[1], 1};
	int b[3] = {p2[0], p2[1], 1};
	int c[3] = {p3[0], p3[1], 1};
	
	// A = 1/2 * modulo(det);
	int area = modulo(det(a,b,c))/2;
	return area;
}

int det(int a[3], int b[3], int c[3]){
	
	int det, p1, p2;
	
	p1 = (a[0]*b[1]*c[2])+(a[1]*b[2]*c[0])+(a[2]*b[0]*c[1]);
	p2 = (a[2]*b[1]*c[0])+(a[0]*b[2]*c[1])+(a[1]*b[0]*c[2]);
	
	det = p1 + (-1*p2);
	
	return det;
}

int modulo(int n){
	if(n < 0) return n*-1;
	else return n;
}
