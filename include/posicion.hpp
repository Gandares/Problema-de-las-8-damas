#pragma once
#include <iostream>
#include "tablero.hpp"

class pos{

private:

  tablero t;

public:

  pos(int i):
  t(i){}
  ~pos(void){}

  void colocar_dama(int i, int j);
  void quitar_dama(int i, int j);
  bool libre(int i, int j);
  bool haydama(int i, int j);
  void write(void);

  private:

  void marcar(int i, int j);
  void desmarcar(int i, int j);

};
