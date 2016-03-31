#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int cria_tela(int l,int c,int L, int C){
char matriz[L][C];
for(l=0;l!=L;l++){
for(c=0;c!=C;c++){
matriz[l][c] = 'o';
}
}
for(l=0;l!=L;l++){
for(c=0;c!=C;c++){
printf("%c ",matriz[l][c]);
}
printf("\n");
}
return matriz[l][c];
}

int main(){

cria_tela(0,0,15,25);

return 0;
}
