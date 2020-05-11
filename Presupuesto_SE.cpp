#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	cout<<"\t********Mejora tu Presupuesto********"<<endl;
	cout<<"\t\tHecho por: Jaysen H.L"<<endl;
	cout<<"\t\tPRogramador Boricua 2020\n"<<endl;
	cout<<"Desea distribuir su presupuesto eficientemente y tener un mejor plan?\n"<<endl;
	
	double tim,tgm,sobrante;//totalingresomensual,totalgastosmensuales,
	double gastos,ahorros,personal;
	double tg=0,ta=0,tp=0;//totalgastos,totalahorros,totalpersonal
	double af=0;//ahorrofinal

	//pasos del menu:
	cout<<"1.Digite su ingreso neto MENSUAL: ";cin>>tim;
	cout<<"2.Digite el total de sus gastos mensuales: ";cin>>tgm;
	//instrucciones
	cout<<"\n \t\t***ANTES DE CONTINUAR***"<<endl;
	cout<<"***Para anadir porcientos, digitelos en decimales!."<<endl;
	cout<<"***Ejemplo: si quieres asignar 40%, solamente tienes que digitar .40, si quieres 45%, digite 0.45 "<<endl;
	cout<<"***Analize bien los porcientos ya que si te excedes de 100% el programa te lo indicara"<<endl;
	
	//validar que no gastes mas de lo que cobras.
		if(tgm>tim){
		cout<<"Gastas mas de lo que ganas...no tiene sentido continuar con el programa...";
		cout<<"/nFIN DEL PROGRAMA...";
		return 0;
		}
	sobrante = tim - tgm;
	
	cout<<"\n3.Ingrese porciento para Gastos: ";cin>>gastos;
	cout<<"4.Ingrese porciento para Ahorros: ";cin>>ahorros;
	cout<<"5.Ingrese porciento para Uso Personal: ";cin>>personal;
	//validar que la suma de los porcientos no exceda 100
	if(gastos+ahorros+personal >1.0){
		cout<<"No puede exederse de 100%. Ingrese nuevamente los porcientos";
		cout<<"\nFin del programa...";
		return 0;
	}
	
	//calcular porcientos
	tg=tgm*gastos;
	ta=tgm*ahorros;
	tp=tgm*personal;
	af = sobrante + ta;
	
	cout<<"\n****Si cobras mensual debes retirar las siguientes cantidades:****";
	cout<<"\n1.Gastos: "<<"$"<<tg;
	cout<<"\n2.Ahorros: "<<"$"<<ta;
	cout<<"\n3.Personal: "<<"$"<<tp<<endl;
	cout<<"\nTienes un sobrante de :"<<"$"<<sobrante;
	cout<<"\nEste sobrante se recomienda anadirlo a tus ahorros.\n";
	cout<<"Para un total de Ahorros: "<<"$"<<af<<"\n"; //ahorrofinal = sobrante + ta
	
	cout<<"\n****Si cobras bi-semanal debes retirar las siguientes cantidades:****\n";
	cout<<"\n1.Gastos: "<<"$"<<tg/2;
	cout<<"\n2.Ahorros: "<<"$"<<ta/2;
	cout<<"\n3.Personal: "<<"$"<<tp/2<<endl;
	cout<<"\nTienes un sobrante de :"<<"$"<<sobrante;
	cout<<"\nEste sobrante se recomienda anadirlo a tus ahorros.\n";
	cout<<"Para un total de Ahorros: "<<"$"<<af;
	
	cout<<"\n****Si cobras semanal debes retirar las siguientes cantidades:****\n";
	cout<<"\n1.Gastos: "<<"$"<<tg/4;
	cout<<"\n2.Ahorros: "<<"$"<<ta/4;
	cout<<"\n3.Personal: "<<"$"<<tp/4<<endl;
	cout<<"\nTienes un sobrante de :"<<"$"<<sobrante;
	cout<<"\nEste sobrante se recomienda anadirlo a tus ahorros.\n";
	cout<<"Para un total de Ahorros: "<<"$"<<af;
	
	return 0;
}
