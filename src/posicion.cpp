#include "../include/posicion.hpp"

void pos::colocar_dama(int i, int j){

  t.set_char(i,j,'X');
  t.set_int(i,j,1);
  marcar(i,j);
}

void pos::quitar_dama(int i, int j){

  t.set_int(i,j,0);
  desmarcar(i,j);
  t.set_char(i,j,' ');
}

bool pos::libre(int i, int j){
  if(t.get_int(i,j)==0)
    return true;
  return false;
}

bool pos::haydama(int i, int j){
  if(t.get_char(i,j)=='X')
    return true;
  return false;
}

void pos::write(void){

  for(int i=0;i<t.get_sz();i++)
    for(int j=0;j<t.get_sz();j++)
      if(t.get_char(i,j)=='X')
        std::cout << "{" << i << "," << j << "} ";
  std::cout << std::endl;

}

void pos::marcar(int i, int j){

  for(int it=0;it<t.get_sz();it++){
    if(t.get_char(i,it)==' ')
      t.set_int(i,it,t.get_int(i,it)+1);
    if(t.get_char(it,j)==' ')
      t.set_int(it,j,t.get_int(it,j)+1);
  }

  int it1=i,it2=j;
  while(it1<t.get_sz()&&it2<t.get_sz()){
    if(t.get_char(it1,it2)==' ')
      t.set_int(it1,it2,t.get_int(it1,it2)+1);
    it1++;
    it2++;
  }

  it1=i;
  it2=j;
  while(it1>=0&&it2>=0){
    if(t.get_char(it1,it2)==' ')
      t.set_int(it1,it2,t.get_int(it1,it2)+1);
    it1--;
    it2--;
  }

  it1=i;
  it2=j;
  while(it1>=0&&it2<t.get_sz()){
    if(t.get_char(it1,it2)==' ')
      t.set_int(it1,it2,t.get_int(it1,it2)+1);
    it1--;
    it2++;
  }

  it1=i;
  it2=j;
  while(it1<t.get_sz()&&it2>=0){
    if(t.get_char(it1,it2)==' ')
      t.set_int(it1,it2,t.get_int(it1,it2)+1);
    it1++;
    it2--;
  }
}

void pos::desmarcar(int i, int j){

  for(int it=0;it<t.get_sz();it++){
    if(t.get_char(i,it)==' ')
      t.set_int(i,it,t.get_int(i,it)-1);
    if(t.get_char(it,j)==' ')
      t.set_int(it,j,t.get_int(it,j)-1);
  }

  int it1=i,it2=j;
  while(it1<t.get_sz()&&it2<t.get_sz()){
    if(t.get_char(it1,it2)==' ')
      t.set_int(it1,it2,t.get_int(it1,it2)-1);
    it1++;
    it2++;
  }

  it1=i;
  it2=j;
  while(it1>=0&&it2>=0){
    if(t.get_char(it1,it2)==' ')
      t.set_int(it1,it2,t.get_int(it1,it2)-1);
    it1--;
    it2--;
  }

  it1=i;
  it2=j;
  while(it1>=0&&it2<t.get_sz()){
    if(t.get_char(it1,it2)==' ')
      t.set_int(it1,it2,t.get_int(it1,it2)-1);
    it1--;
    it2++;
  }

  it1=i;
  it2=j;
  while(it1<t.get_sz()&&it2>=0){
    if(t.get_char(it1,it2)==' ')
      t.set_int(it1,it2,t.get_int(it1,it2)-1);
    it1++;
    it2--;
  }
}
