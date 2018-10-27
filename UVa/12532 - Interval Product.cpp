#include <bits/stdc++.h>
using namespace std;


int ST[300000], arr[100002];

int helper(int n){
	if(n == 0)
		return 0;
	else if (n < 0)
		return -1;
	else
		return 1;
}

int query(int ini, int fin,  int nodo, int i, int j){
	if( fin < i || j < ini)
		return 1;	// 	nos encontramos en un rango que no es importante para la consulta, cambia el valor
					// de retorno dependiendo del problema
	else if( i <= ini && fin <= j)  // el rango está completamente contenido
		return ST[nodo];
	else {
		int mitad = (ini+fin)/2;
		int izq = query(ini, mitad, nodo*2, i, j);				// ST indexado desde 1
		int der = query(mitad+1, fin, nodo*2+1, i, j);
		return izq*der;   // cambiar la operación dependiendo del problema
	}
}

void initSt(int ini, int fin, int nodo){
	if(ini == fin)		// llegamos al nodo hoja
		ST[nodo] = helper(arr[ini]);
	else {
		int mitad = (ini+fin)/2;
		initSt(ini, mitad, nodo*2);		// ST indexado desde 1
		initSt(mitad+1, fin, nodo*2+1);
		ST[nodo] = 	ST[nodo*2] * ST[nodo*2+1];	// cambiar la operación dependiendo del problema		
	}
}

void update(int ini, int fin, int nodo, int x, int val){
	if(ini == fin && ini == x)
		ST[nodo] = helper(val);
	else if(ini <= x && x <= fin){
		int mitad = (ini+fin)/2;
		update(ini,mitad, nodo*2,x,val);
		update(mitad+1, fin, nodo*2+1, x, val);
		ST[nodo] = ST[nodo*2] * ST[nodo*2+1];	// cambiar la operación dependiendo del problema		
	}
}


int main(){
	int n,k;
	
	while(cin >> n >> k){
		for(int i = 1; i <= n; i++)
			cin >> arr[i];
			
		initSt(1,n,1);
		
		for(int i = 1; i<= k; i++){
			char c;
			cin >> c;
			int l,r;
			cin >> l >> r;
			if(c == 'C')
				update(1,n,1,l,r);
			else{
				int res = query(1,n,1,l,r);
				if(res == 0)
					cout << 0;
				else if(res < 0)
					cout << "-";
				else 
					cout << "+";			
			}			
		}
		cout << '\n';
		
	}
	
	
	return 0;
}

