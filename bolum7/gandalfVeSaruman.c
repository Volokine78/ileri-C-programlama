#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void enerjileriYazdir();
void gandalfSaldir();
void sarumanSaldir();
void gandalfSavun();
void sarumanSavun();

int oran = 0;
int buyuNo = 0;

int sarumanEnerji = 100;
int sarumanOranlar[3] = {45, 40, 15};
int sarumanBuyuler[3] = {5, 7, 13};

int gandalfEnerji = 100;
int gandalfOranlar[3] = {45, 20, 35};
int gandalfBuyuler[3] = {3, 9, 10};

int main() {

    srand(time(NULL));

    printf("Mücadele başlıyor...\n\n");

    do {
        gandalfSaldir();
        printf("\n\n");
        sarumanSavun();
        printf("\n\n");
        sarumanSaldir();
        printf("\n\n");
        gandalfSavun();
        printf("\n\n");
    } while (gandalfEnerji > 0 && sarumanEnerji > 0);

    printf("Mücadele bitti.\n\n");
    enerjileriYazdir();
    printf("Sonuç: ");

    if (gandalfEnerji <= 0 && sarumanEnerji <= 0) {
        printf("Berabere!\n");
    } else if (gandalfEnerji > 0) {
        printf("Gandalf kazandı. Yüzük güvende.\n");
    } else {
        printf("Saruman kazandı. Yüzük Sauron'un eline geçti.\n");
    }
    return 0;
}

void enerjileriYazdir() {
    printf("Gandalf: %d   Saruman: %d\n", gandalfEnerji, sarumanEnerji);
}

void gandalfSaldir() {
    oran = rand() % 100 + 1;
    if (oran <= gandalfOranlar[0]) {
        printf("Gandalf \"su\" büyüsü yaptı.\n");
        buyuNo = 0;
    } else if (oran > gandalfOranlar[0] &&
    oran <= gandalfOranlar[0] + gandalfOranlar[1]) {
        printf("Gandalf \"toprak\" büyüsü yaptı.\n");
        buyuNo = 1;
    } else {
        printf("Gandalf \"iyi ruh\" büyüsü yaptı.\n");
        buyuNo = 2;
    }
    sarumanEnerji -= gandalfBuyuler[buyuNo];
    enerjileriYazdir();
}

void sarumanSavun() {
    oran = rand() % 100 + 1;
    if (oran <= sarumanOranlar[0]) {
        printf("Saruman \"su\" büyüsünü halleti.\n");
        buyuNo = 0;
    } else if (oran > sarumanOranlar[0] &&
    oran <= sarumanOranlar[0] + sarumanOranlar[1]) {
        printf("Saruman \"toprak\" büyüsünü eşeledi.\n");
        buyuNo = 0;
    } else {
        printf("Saruman \"iyi ruh\" büyüsünü cennete gönderdi.\n");
        buyuNo = 0;
    }
    sarumanEnerji += sarumanBuyuler[buyuNo];
    enerjileriYazdir();
}

void sarumanSaldir() {
    oran = rand() % 100 + 1;
    if (oran <= sarumanOranlar[0]) {
        printf("Saruman \"ışık\" büyüsü yaptı.\n");
        buyuNo = 0;
    } else if (oran > sarumanOranlar[0] &&
    oran <= sarumanOranlar[0] + sarumanOranlar[1]) {
        printf("Saruman \"ateş\" büyüsü yaptı.\n");
        buyuNo = 1;
    } else {
        printf("Saruman \"kötü ruh\" büyüsü yaptı.\n");
        buyuNo = 2;
    }
    gandalfEnerji -= sarumanBuyuler[buyuNo];
    enerjileriYazdir();
}

void gandalfSavun() {
    oran = rand() % 100 + 1;
    if (oran <= gandalfOranlar[0]) {
        printf("Gandalf \"ışık\" büyüsünü kararttı.\n");
        buyuNo = 0;
    } else if (oran > gandalfOranlar[0] &&
    oran <= gandalfOranlar[0] + gandalfOranlar[1]) {
        printf("Gandalf \"ateş\" büyüsünü söndürdü.\n");
        buyuNo = 1;
    } else {
        printf("Gandalf \"kötü ruh\" büyüsünü diyarına gönderdi.\n");
        buyuNo = 2;
    }
    gandalfEnerji += gandalfBuyuler[buyuNo];
    enerjileriYazdir();
}