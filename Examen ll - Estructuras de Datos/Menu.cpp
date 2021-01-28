#include "Menu.h"

void Menu::menuPrincipal() {
	int opc;
	ParseGraph g(15);
	char scr;
	int num;
	//g.buildGraph("Graph_Data.txt");
	do{
		cout << "--BIENVENIDO AL SISTEMA--" << endl;
		cout << "1. Cargar datos del archivo" << endl;
		cout << "2. Algoritmo de Dijkstra " << endl;
		cout << "3. Algoritmo Kruskal" << endl;
		cout << "4. Algoritmo Prim" << endl;

		//esta parte es para hacer uso de los calculos de
		//cada componente, en caso de que se deseen modificar
		cout << "5. Escribir datos en el archivo" << endl;
		cout << "6. Salir" << endl;
		cin >> opc;
		switch (opc){
		case 1:
			cout << "Datos cargados" << endl;
			g.buildGraph("Graph_Data.txt");
			cout << endl;
			break;
		case 2:
			cout << "Digite el vertice por el cual desea iniciar el recorrido" << endl;
			cout << "Vertices: A - B - C - D - E - F - G - H - I" << endl;
			cin >> scr;
			while (!isalpha(scr)) {
				cout << "Por favor ingrese un valor valido" << endl;
				cout << "Digite la letra por la que desea empezar el recorrido" << endl;
				cin >> scr;
			}
			scr = toupper(scr);
			num = (int) scr - 65;
			if (num > 10) {
				cout << "Vertice invalido" << endl;
			}
			else {
				cout << "--Algoritmo Dijkstra-- " << endl;
				cout << endl;
				g.getGrafoDijkstra()->dijkstra(num);
				cout << endl;
			}
			break;
		case 3:
			cout << "--Algoritmo Kruskal-- " << endl;
			cout << endl;
			g.getGrafoKruskal()->kruskal();
			cout << endl;
			break;
		case 4:
			cout << "--Algoritmo Prim-- " << endl;
			cout << endl;
			g.getGrafoPrim()->primMST();
			cout << endl;
			break;
		case 5:
		{
			vector<MachineDetails> machine;
			MachineDetails machine1(0, 1, 2, 0, 2, 2);
			MachineDetails machine2(0, 2, 2, 1, 2, 3);
			MachineDetails machine3(1, 2, 2, 0, 2, 0);
			MachineDetails machine4(1, 3, 2, 0, 1, 2);
			MachineDetails machine5(2, 4, 0, 2, 0, 0);
			MachineDetails machine6(2, 5, 0, 0, 0, 2);
			MachineDetails machine7(3, 4, 2, 0, 0, 4);
			MachineDetails machine8(3, 5, 2, 2, 0, 6);
			MachineDetails machine9(3, 7, 0, 2, 0, 4);
			MachineDetails machine10(3, 6, 2, 0, 1, 2);
			MachineDetails machine11(4, 5, 0, 2, 0, 0);
			MachineDetails machine12(5, 7, 0, 4, 0, 0);
			MachineDetails machine13(6, 7, 2, 0, 2, 0);
			MachineDetails machine14(6, 8, 0, 0, 0, 4);
			MachineDetails machine15(7, 8, 2, 2, 0, 6);

			machine.push_back(machine1);
			machine.push_back(machine2);
			machine.push_back(machine3);
			machine.push_back(machine4);
			machine.push_back(machine5);
			machine.push_back(machine6);
			machine.push_back(machine7);
			machine.push_back(machine8);
			machine.push_back(machine9);
			machine.push_back(machine10);
			machine.push_back(machine11);
			machine.push_back(machine12);
			machine.push_back(machine13);
			machine.push_back(machine14);
			machine.push_back(machine15);

			/*for (int i = 0; i < machine.size(); i++) {
				cout << machine.at(i).getName1() << "," << machine.at(i).getName2() << ",peso: " << machine.at(i).getFinalWeight() << endl;
			}*/
			
			WriteGraph::writeGraph("Graph_Data.txt", machine);
		}
			
		case 6:
			cout << "Gracias por utilizar el sistema" << endl;
			exit(0);
		default:
			cout << "Valor no valido" << endl;
			break;
		}
	} while (opc > 0 && opc!= 5 );
}