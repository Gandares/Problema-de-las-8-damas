#include <iostream>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int dimen=atoi(argv[1]);

  std::cout << "#include \"../../include/posicion.hpp\"" << std::endl;
  std::cout << "#include <ctime>" << std::endl << std::endl;

  std::cout << "int main(void){" << std::endl << std::endl;

    std::cout << "unsigned t0, t1;" << std::endl;
    std::cout << "t0=clock();" << std::endl;
    std::cout << "int dim=" << dimen << ";" << std::endl;
    std::cout << "pos A(dim);" << std::endl;
    std::cout << "int contador=0;" << std::endl << std::endl;

    for(int i=0;i<dimen;i++){
       std::cout << "for(int i" << i << "=0; i" << i << "<dim;i" << i << "++){" << std::endl;
       std::cout << "if(A.libre(" << i << ",i" << i << ")){" << std::endl;
       std::cout << "A.colocar_dama(" << i << ",i" << i << ");" << std::endl;
    }

    std::cout << "contador++;" << std::endl;
    std::cout << "A.write();" << std::endl;

    for(int i=dimen-1;i>=0;i--){
       std::cout << "}" << std::endl;
       std::cout << "if(A.haydama(" << i << ",i"<< i << "))" << std::endl;
       std::cout << "A.quitar_dama(" << i << ",i"<< i << ");" << std::endl;
       std::cout << "}" << std::endl;
    }

    std::cout << "std::cout << \"Un total de \" << contador << \" soluciones encontradas en: \";" << std::endl;
    std::cout << "t1=clock();" << std::endl;
    std::cout << "double time=(double(t1-t0)/CLOCKS_PER_SEC);" << std::endl;
    std::cout << "std::cout << time << \" segundos\" << std::endl;" << std::endl;
    std::cout << "}" << std::endl;
}
