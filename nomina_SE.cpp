#include<iostream>
using namespace std;

int main(){
	/* nE=numero empleado, hT=horas trabajadas, pH=precio Hora, sB= sueldo bruto,tD= total deducciones
	 sD=sueldo neto, sS= seguro social, mC = medicaid, d*/
	
	int nE,hT;
	string nombre,puesto;
	float pH,sB,tD,sN,sS,mC;
	
	for(int i=0;i<=5;i++){
		cout<<"Digite el numero de empleado: ";cin>>nE;
		cout<<"Digite el nombre: ";cin>>nombre;
		cout<<"Digite el puesto: ";cin>>puesto;
		cout<<"Digite las horas trabajadas: ";cin>>hT;
		cout<<"Digite el precio por hora: ";cin>>pH;
		//sueldo bruto
		sB = hT * pH;
		//deduccion seguro social
		sS = sB * 0.07;
		//deduccion medicaid
		mC = sB * 0.0168;
		//total deducciones
		tD = sS + mC;
		//sueldo neto
		sN = sB - tD;
		cout<<"\nNumero de Empleado: "<<nE<<endl;
		cout<<"El sueldo bruto del empleado: "<<nombre<<" es: "<<sB<<endl;
		cout<<"El total de deducciones del empleado: "<<nombre<<" es: "<<tD<<endl;
		cout<<"El sueldo neto del empleado: "<<nombre<<" es: "<<sN<<endl;
		
	}
	
}




/*
float pi = 3.1415926536;
	float radianes,grados,numRadianes,numGrados;
	
	cout<<"\nDigite el numero de grados: ";cin>>grados;
	numRadianes = grados*(pi/180);
	cout<<grados<<" grados equivale a: "<<numRadianes<<" radianes";
	
	cout<<"\nDigite el numero de radianes: ";cin>>radianes;
	numGrados = radianes*(180/pi);
	cout<<radianes<<" radianes equivale a: "<<numGrados<<" grados";
	*/
