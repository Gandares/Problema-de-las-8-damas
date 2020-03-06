from time import time
import subprocess

x=input('Tablero de dimension x*x -> x=')
start_time=time()
dimension=str(x)
p=subprocess.Popen(["./forescalable.out",dimension],stdout=subprocess.PIPE)
stdout=p.communicate()[0]
fichero=open("maindamas.cpp","w")
fichero.write(stdout)
fichero.close()

subprocess.call(["g++","maindamas.cpp","../posicion.cpp","../tablero.cpp","-o","xreinas"])
final_time=time()-start_time
subprocess.call(["./xreinas"])
print 'crear main, compilar y ejecutar, un total de ', final_time, ' segundos'
