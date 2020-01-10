#include <iostream> 
#include<stdio.h>
#include <windows.h>
#include <cstdlib>
#include <ctime> //esta biblioteca la he empleado para el uso del random

using namespace std;



int main(){
system("color 07"); //asignado para el color de la barra de carga
char z=219; 
int segundos = 3;
int c1=0;
int c2=0;
int c3=0;
int c4=0;
int c5=0;
int c6=0;
int r= rand() %5 + 1;



            goto cargando;
            
            cargando:
            //esta función es simplemente para la barra cargando
            
                    cout<< "\t\t\t\t CARGANDO... \n";
           
            for (int i=0; i<80;i++)
            {
                    cout<<z;
                    Sleep(segundos*20);
            }
           
        system ("cls");


        cout<< "\t\t\t -ESTAS SON LAS TIRADAS: - \n";
         
            for (int i=0;i<=100;i++){
                int r= rand() %5 + 1; //se genera el random y se le asgina a la variable r
                cout << r << " " ;
                    if(r=c1){   //esto son contadores que acumulan el valor de los dados
                        c1=c1+1;
                    }
                    if(r=c2){
                        c2=c2+1;
                    }
                    if(r=c3){
                        c3=c3+1;
                    }
                    if(r=c4){
                        c4=c4+1;
                    }
                    if(r=c5){
                        c5=c5+1;
                    }
                    if(r=c6){
                        c6=c6+1;
                    } 
            }

             cout<< "\t\t\t\t ========EL DADO HA SIDO LANZADO======== \n";

                   
cout<<"La cara 1 ha salido: "<<c1<<endl;
cout<<"La cara 2 ha salido: "<<c2<<endl;
cout<<"La cara 3 ha salido: "<<c3<<endl;
cout<<"La cara 4 ha salido: "<<c4<<endl;
cout<<"La cara 5 ha salido: "<<c5<<endl;
cout<<"La cara 6 ha salido: "<<c6<<endl;
cout<<"Edicion de lrepositorio"<<endl;
           
return 0;

} 
