#pragma once
#include <utility>
#include <vector>

class tablero{

  private:

    std::vector<std::vector<std::pair<char,int> > > tabla;
    int dimension;

  public:

    tablero(int d):
    dimension(d){
      for(int i=0;i<dimension;i++){
          std::vector<std::pair<char,int> > aux;
          for(int j=0;j<dimension;j++){
            std::pair<char,int> a(' ',0);
            aux.push_back(a);
          }
          tabla.push_back(aux);
      }
    }

    ~tablero(void){
      tabla.clear();
    }

    int get_sz(void);
    void set_char(int i, int j, char mod);
    void set_int(int i, int j, int mod);
    char get_char(int i, int j);
    int get_int(int i, int j);
};
