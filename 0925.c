#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* be = fopen("szamok.txt", "r");

    if(be ==NULL){
        printf("Nem sikerült megnyitni \n");
        exit(1);
    }

    int szam, db=0;
    while( !feof(be)){
        fscanf(be, "%d", &szam);
        db++;
        printf("ezt olvastuk be: %d\n", szam);
        FILE* be2 = fopen("szamok.txt","r");
        int szam2, i;
        i = 0;

        while (i<db){
            fscanf(be2, "%d",&szam2);
        }
        while(!feof(be2)){
            fscanf(be2,"%d",&szam2);
            printf(" ezt olvastuk be: %d\n",szam2);

            if(szam==szam2){
                printf("Van ket egyforma");
            }
        }
        fclose(be2);
    }


    fclose(be);
    return 0;


}
