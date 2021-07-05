#include <iostream>

using namespace std;

//template <class type T>

void quicksort ( int *v , int n);

int partition ( int  *v, int  n);

void scambia(int *v, int i, int j);

void quicksort (int *v , int n){
	if ( n <=1) return;
    int m= partition (v, n);
	quicksort (v, m+1);
    quicksort (v+(m+1), n-(m+1));
}

int partition ( int *v, int n){
    int pivot=v[0];
    int i=-1;
    int j=n+1;

    do{
        do i++; while (v[i]<pivot);
        do j++; while (v[i]>pivot);
        if (i<j) scambia(v, i, j);
    } while(i<j);
    return j;
}

void scambia(int *v, int i, int j){
    int temp= v[i];
    v[i]= v[j];
    v[j]= v[i];
}

int partition_del_prof(int *v, int n) {
    int pos = rand()%n; // posizione a caso
    scambia(v,0,pos);
    int pivot = v[0];
    int i =-1;
    int j = n;
    do {
        do i=i+1; while (v[i]<pivot);
        do j=j-1; while (v[j]>pivot);
        if(i<j) scambia(v,i,j);
    } while(i<j);
    return j;
}
