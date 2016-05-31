/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int n, soma;
    while(1) {
        scanf("%d",&n);
        if(n==0) break;
        soma=0;
        while(n!=1) {
            while(n%3!=0) n++;
            n/=3;
            soma+=n;
        }
        printf("%d\n", soma);
    }
    return 0;
}
