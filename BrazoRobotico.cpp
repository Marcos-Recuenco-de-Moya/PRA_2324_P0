#include <BrazoRobotico.h>

BrazoRobotico::BrazoRobotico(double X, double Y, double Z, bool sujeto){
	x = X;
	y = Y;
	z = Z;
	sujetando = sujeto;
}

double BrazoRobotico::getX(){
	return x;
}

double BrazoRobotico::getY(){
        return y;
}  

double BrazoRobotico::getZ(){
        return z;
}
bool BrazoRobotico::getSujetando(){
	return sujetando;
}

void coger(){
	sujetando = true;
	printf("Objeto cogido con éxito\n");
}

void soltar(){
	sujetando = false;
	printf("Objeto soltado con éxito\n");
}

void mover(double X, double Y, double Z){
	x = X;
	y = Y;
	z = Z;
}

