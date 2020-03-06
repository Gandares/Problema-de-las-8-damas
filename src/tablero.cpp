#include "../include/tablero.hpp"

int tablero::get_sz(void){
  return dimension;
}

void tablero::set_char(int i, int j, char mod){
  std::get<0>(tabla[i][j])=mod;
}

void tablero::set_int(int i, int j, int mod){
  std::get<1>(tabla[i][j])=mod;
}

char tablero::get_char(int i, int j){
  return std::get<0>(tabla[i][j]);
}

int tablero::get_int(int i, int j){
  return std::get<1>(tabla[i][j]);
}
