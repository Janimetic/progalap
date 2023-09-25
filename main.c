#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* be = fopen("szamok.txt", "r");

    if(be ==NULL){
        printf("Nem sikerült megnyitni \n");
            exit(1);
    }

    int szam;
    while( !feof(be)){
        fscanf(be, "%d", &szam);
        printf("ezt olvastuk be: %d\n", szam);

    }


    fclose(be);
        return 0;


}
