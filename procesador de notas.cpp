#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int opc;//opcion
	float p1=0,p2=0,p3=0,p4=0,pf=0;// variables para opc 1. pf=puntuacion final
	float trabajos=0,examenes=0,asistencia=0,participacion,pff=0;//variables para la opc 2. pff=porcentaje final.
	float trabajosf=0,examenesf=0,asistenciaf=0,participacionf=0;//variables con porcentajes asignados. se puede usar para modificar el porciento
	string estudiante;
	
	cout<<"\t\t|Procesador de Notas 2020|"<<endl;
	cout<<"\t\t|Made By: PRogramador Boricua|"<<endl;
	cout<<"\n****INFORMACION IMPORTANTE****"<<endl;
	cout<<"Este programa Es para evaluar alumnos.Consiste de 2 metodos:"<<endl;
	cout<<"\n1.PROMEDIO DE 4 TAREAS entregadas: Digitas la puntuacion de cada tarea individual y el programa te devuelve el porciento y nota equivalente."<<endl;
	cout<<"\n2.PROMEDIO DE CATEGORIAS(Trabajos, Examenes, Asistencia,Participacion): Vas a digitar el total de puntos por cada categoria(Tareas, Examenes, Asistencia), el programa le asignara un 33.3% a cada categoria e imprimira el porcentaje final y asignara la nota equivalente. "<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<"\t\t\tMENU \n"<<endl;
	cout<<"1.PROMEDIO DE 4 TAREAS\n"<<endl;
	cout<<"2.PROMEDIO DE CATEGORIAS\n"<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<"Entre el nombre del estudiante: \n"; cin>>estudiante;
	cout<<"Escoja una opcion del menu: \n"; cin>>opc;
	
	
	switch(opc){
		case 1:
			cout<<"Digite la puntuacion de la tarea 1: "; cin>>p1;
			cout<<"Digite la puntuacion de la tarea 2: "; cin>>p2;
			cout<<"Digite la puntuacion de la tarea 3: "; cin>>p3;
			cout<<"Digite la puntuacion de la tarea 4: "; cin>>p4;
			pf = (p1+p2+p3+p4)/4;
			cout<<"\nLa nota final del estudiante: "<<estudiante<<" es: "<<pf<<"%";
		if(pf >=90){
			cout<<"\nPuntuacion = A!.\n";break;
		}else if(pf >=80 && pf <= 89){
			cout<<"\nPuntuacion = B.\n";break;
		}else if(pf>=70 && pf <=79){
			cout<<"\nPuntuacion = C.\n";break;
		}else if(pf>=60 && pf <=69){
			cout<<"\nPuntuacion = D.\n";break;
		}
		else if(pf<=59){
			cout<<"\nLa puntuacion = F\n";break;
		}
		
		case 2:
	
			cout<<"\nDigite la puntuacion total para Trabajos: ";cin>>trabajos;
			cout<<"\nDigite la puntuacion total para Examenes: ";cin>>examenes;
			cout<<"\nDigite la puntuacion total para Asistencia: ";cin>>asistencia;
			cout<<"\nDigite la puntuacion total para Participacion: ";cin>>participacion;
			//variables para modificar porcientos. HACER CURVAS
			trabajosf = trabajos*.25;
			examenesf = examenes*.25;
			asistenciaf = asistencia*.25;
			participacionf = participacion*.25;
			pff = trabajosf+examenesf+asistenciaf+participacionf;
			
			//si el porcentaje final es menor que estos porcientos especificos, ejecuta x instruccion
			if(pff>=90){
				cout<<"\nPORCENTAJE: "<<pff<<"%. = A";break;
			}else if(pff>=80 && pff<=89){
				cout<<"\nPORCENTAJE: "<<pff<<"%. = B";break;
			}else if(pff >=70 && pff<=79){
				cout<<"\nPORCENTAJE: "<<pff<<"%. = C";break;
			}else if(pff>=60 && pff<=69){
				cout<<"\nPORCENTAJE: "<<pff<<"%. = D";break;
			}else if(pff>0 && pff<=59){
				cout<<"\nPORCENTAJE: "<<pff<<"%. = ";break;
			}
			
		default: break;	
				
	}
	
	cout<<"\nFin del programa\n";
	system("pause");
	return 0;
}
