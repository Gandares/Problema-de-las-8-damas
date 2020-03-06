#include "../../include/posicion.hpp"
#include <ctime>

int main(void){

unsigned t0, t1;
t0=clock();
int dim=8;
pos A(dim);
int contador=0;

for(int i0=0; i0<dim;i0++){
if(A.libre(0,i0)){
A.colocar_dama(0,i0);
for(int i1=0; i1<dim;i1++){
if(A.libre(1,i1)){
A.colocar_dama(1,i1);
for(int i2=0; i2<dim;i2++){
if(A.libre(2,i2)){
A.colocar_dama(2,i2);
for(int i3=0; i3<dim;i3++){
if(A.libre(3,i3)){
A.colocar_dama(3,i3);
for(int i4=0; i4<dim;i4++){
if(A.libre(4,i4)){
A.colocar_dama(4,i4);
for(int i5=0; i5<dim;i5++){
if(A.libre(5,i5)){
A.colocar_dama(5,i5);
for(int i6=0; i6<dim;i6++){
if(A.libre(6,i6)){
A.colocar_dama(6,i6);
for(int i7=0; i7<dim;i7++){
if(A.libre(7,i7)){
A.colocar_dama(7,i7);
contador++;
A.write();
}
if(A.haydama(7,i7))
A.quitar_dama(7,i7);
}
}
if(A.haydama(6,i6))
A.quitar_dama(6,i6);
}
}
if(A.haydama(5,i5))
A.quitar_dama(5,i5);
}
}
if(A.haydama(4,i4))
A.quitar_dama(4,i4);
}
}
if(A.haydama(3,i3))
A.quitar_dama(3,i3);
}
}
if(A.haydama(2,i2))
A.quitar_dama(2,i2);
}
}
if(A.haydama(1,i1))
A.quitar_dama(1,i1);
}
}
if(A.haydama(0,i0))
A.quitar_dama(0,i0);
}
std::cout << "Un total de " << contador << " soluciones encontradas en: ";
t1=clock();
double time=(double(t1-t0)/CLOCKS_PER_SEC);
std::cout << time << " segundos" << std::endl;
}
