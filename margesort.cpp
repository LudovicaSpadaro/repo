void margesort (int *v, int n);
int marge (int *v, int n);
void scambia(int *v, int i, int j);


void margesort (int *v, int n){
    if (n<=1) return;
    int m= n/2;
    margesort (v, m);
    margesort (v+m, n-m);
    marge (v, n);
}

int marge (int *v, int n, int m){
    int a[0];
    int i=0;
    int k=0;
    int j=m;

    while(i<m, j<n){
        if (v[i]<v[j]) a[k++]=v[i++];
        else a[k++]=v[j++];
    }
    if (i<m) a[k++]=v[i++];
    if (j<n) a[k++]=v[j++];
    for (int b=0; b<n; b++) v[b]=a[k];

}