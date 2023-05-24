#include<stdio.h>
int i,j,k;

void merge(int *a, int L, int R) {
    int M = (L + R) / 2;
    int i = L, j = M + 1, k = 0;
    int temp[R - L + 1];
    while (i <= M && j <= R) {
        if (a[i] <= a[j]) {
            temp[k] = a[i];
            ++i;
        } else {
            temp[k] = a[j];
            ++j;
        }
        ++k;
    }
    while (i <= M) {
        temp[k] = a[i];
        ++i;
        ++k;
    }
    while (j <= R) {
        temp[k] = a[j];
        ++j;
        ++k;
    }
    for (i = 0; i < k; ++i) {
        a[L + i] = temp[i];
    }
}

void mergesort(int *a,int l,int r){
    if(l==r){
        return;
    }
    int m = l+(r-l)/2;
    mergesort(a,l,m);
    mergesort(a,m+1,r);
    merge(a,l,r);
}
int binser(int *a,int l,int r,int k){
    if(l<=r){
    int m = l+(r-l)/2;
    if(k==a[m]){
        return m;
    }
    if(k<a[m]){
        return binser(a,l,m-1,k);
    }
    if(k>a[m]){
        return binser(a,m+1,r,k);
    }
}
    return -1;
}

int main(){
 int t;
 scanf("%lld",&t);
 int arr[t];
 for(i=0;i<t;i++){
  scanf("%d",&arr[i]);
 }
 mergesort(arr,0,t-1);
    int n,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&k);
        int temp = binser(arr,0,t-1,k);
        if(temp==-1){
            printf("-1\n");
        }
        else{
            printf("%d\n",temp+1);
        }
    }
 return 0;
}

