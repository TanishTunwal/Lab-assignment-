#include <stdio.h>

int s(int a[], int l) {
    int s1, s2;
    s1 = s2 = 1000000;
    for(int i = 0; i < l; i++) {
        if(a[i] < s1) {
            s2 = s1;
            s1 = a[i];
        } else if(a[i] < s2 && a[i] != s1) {
            s2 = a[i];
        }
    }
    return s2 == 1000000 ? -1 : s2;
}
