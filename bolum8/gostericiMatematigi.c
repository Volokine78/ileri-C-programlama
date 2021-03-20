#include <stdio.h>

int main() {

    char c = 'e';
    int i = 99;
    double d = 0.44;

    char * cPt = &c;
    int * iPt = &i;
    double * dPt = &d;

    printf("ilk adresler:\n\n");
    printf("c nin ilk adresi: %p\tdeğeri %c\n", cPt, *cPt);
    printf("i nin ilk adresi: %p\tdeğeri %d\n", iPt, *iPt);
    printf("d nin ilk adresi: %p\tdeğeri %f\n", dPt, *dPt);

    cPt++;
    iPt += 3;
    dPt -= 5;

    printf("değişikliklerden sonraki adresler:\n\n");
    printf("c nin sonraki adresi: %p\tdeğeri %c\n", cPt, *cPt);
    printf("i nin sonraki adresi: %p\tdeğeri %d\n", iPt, *iPt);
    printf("d nin sonraki adresi: %p\tdeğeri %f\n", dPt, *dPt);

    return 0;
}