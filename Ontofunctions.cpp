#include <iostream>
using namespace std;

int sumatoria(int a,int b){
  int resultado=0;
  resultado=a+b;
return resultado;
}
int sustraccion(int a,int b){
  int resultado=0;
  resultado=a-b;
return resultado;
}
int producto(int a,int b){
  int resultado=0;
  resultado=a*b;
return resultado;
}
int cociente(int a,int b){
  int resultado=0;
  resultado=a/b;
return resultado;
}
int residuo(int a,int b){
  int resultado=0;
  resultado=a%b;
return resultado;
}

int main() {
	int n1, n2;
	cout<<"Dame un numero, bro"<< endl;
	cin>>n1;
	cout<<"Dame el segundo, apurate"<<endl;
	cin>>n2;
	cout<<"El resultado de la suma con los numeros que me diste es: "<<sumatoria(n1,n2)<<endl;
	cout<<"El resultado de la resta con los numeros que me diste y en el orden que me los diste es: "<<sustraccion(n1,n2)<<endl;
	cout<<"El resultado de la multiplicacion con los numeros que me diste es: "<<producto(n1,n2)<<endl;
	cout<<"El resultado de la division con los numeros que me diste y en el orden que me los diste es: "<<cociente(n1,n2)<<endl;
	cout<<"El residuo de la division anterior es: "<<residuo(n1,n2)<<endl;
	return 0;
}
