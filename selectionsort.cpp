#include <iostream>

using namespace std;

void selectionsort (int *v, int n);
int maxpos(int *v, int n) ;
void scambia(int *v, int i, int j);

void selectionsort (int *v, int n){
    if (n<=1) return;
    int m= maxpos(v, n);
    scambia (v, m, n-1);
    return selectionsort(v, n-1);
}

void scambia(int *v, int i, int j){
    int temp= v[i];
    v[i]= v[j];
    v[j]= v[i];
}


int maxpos(int *v, int n) {
    int pos = 0;
    for(int i=1; i<n; i++)
        if(v[pos]<v[i]) pos=i;
    return pos;
}