#include <stdlib.h>
#include <stdio.h>

int main () {

	long long int max = -1;
	long long int q = 0;
	long long int N , X, *a;

    scanf("%lld %lld" , &N,&X);

	a = (long long int *) malloc ( N * sizeof(long long int) );
	// unsigned long long int a[w];
    for ( q = 0 ; q < N ; q++ ) {
        scanf("%lld" , &a[q]);
        if ( a[q] > max )
            max = a[q];
    }
    
    long long int r = 0;
    long long int t = max - 1;
    long long int y = 0 , mid;
    long long int H = 0;
    
    while ( r <= t ) {
        mid = (t+r)/2;
        y = 0;
        for ( q = 0 ; q < N ; q++ ) {
            long long int temp = a[q] - mid;
            y += (temp > 0 ? temp : 0);
        }

        if ( y == X ) {
            H = mid;
            break;
        }
        else if ( y < X ) {
            t = mid - 1;
        }
        else {
            r = mid + 1;
            if ( mid > H )
                H = mid;
        }

    }
    printf("%lld\n" , H);

    return 0;
}
