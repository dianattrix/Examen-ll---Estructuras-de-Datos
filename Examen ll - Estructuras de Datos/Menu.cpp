#include "Menu.h"

void Menu::menuPrincipal() {
	int opc;
	ParseGraph g(15);
	char scr;
	int num;
	g.buildGraph("Graph_Data.txt");
	do{
		cout << "--BIENVENIDO AL SISTEMA--" << endl;
		cout << "1. Cargar datos del archivo" << endl;
		cout << "2. Algoritmo de Dijkstra " << endl;
		cout << "3. Algoritmo Kruskal" << endl;
		cout << "4. Algoritmo Prim" << endl;
		cout << "5. Salir" << endl;
		cin >> opc;
		switch (opc){
		case 1:
			g.buildGraph("Graph_Data.txt");
			cout << "Datos cargados" << endl;
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
			cout << "Gracias por utilizar el sistema" << endl;
			exit(0);
		default:
			cout << "Valor no valido" << endl;
			break;
		}
	} while (opc > 0 && opc!= 5 );
}