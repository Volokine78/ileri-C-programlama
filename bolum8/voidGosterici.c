#include <stdio.h>

int main() {

    int i = 2;
    float f = 3.3;
    int * pt1 = NULL;
    int * pt2 = 0;

    void *vGosterici;
    int *iGosterici = &i;
    float *fGosterici = &f;

    vGosterici = &i;
    vGosterici = &f;

    printf("vGosterici: %p\n", vGosterici);
    printf("iGosterici: %p\n", iGosterici);
    printf("fGosterici: %p\n", fGosterici);
    printf("Null Pt1: %p\n", pt1);
    printf("Null Pt2: %p\n", pt2);
    printf("Null Pt1: %d\n", *pt1);
    printf("Null Pt2: %d\n", *pt2);

    return 0;
}