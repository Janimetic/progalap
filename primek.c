#include <stdio.h>
#include <stdlib.h>

int main(){
    int N =86;
    int primek[N];
    int db =0;
    int szam=2;

    while(db<N){
        int prime = 1;
        int oszto;
        for (oszto=2; oszto*oszto<=szam;oszto++){
            if(szam%oszto ==0){
                prime=0;
                break;
            }
        }
        if(prime==1) {
            primek[db] = szam;
            db++;
        }
        szam++;
    }
    int index;
    for (index=0;index<N;index++){
        printf("prim: %d\n",primek[index]);
    }


    return 0;
}