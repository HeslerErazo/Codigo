#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    
    int opcion=0;
   
    while(true){
    cout <<"-----------------------------------------------" << endl;
    cout <<"-                Menu de Juegos               -" << endl;
    cout <<"-----------------------------------------------" << endl;
    cout << endl;
    cout << "Ingrese una opcion: " << endl;
    cout << "1 - Startship" << endl;
    cout << "2 - Snake" << endl;
    cout << "0 - Salir" << endl;

    cin >> opcion;
   
   	 switch(opcion){

    	case 1: starShip();
    			
    	break;
   		
		case 2: snake();
				
    	break;
   		
		default:   
    	break;
    }
    	 system("pause");
    	 cout << endl;
		 
		 if(opcion == 0){
    		
        break;
        }
    } 
    return 0;
}
