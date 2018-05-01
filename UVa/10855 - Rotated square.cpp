#include<iostream>
using namespace std;

int main(){
	
	int N,n;
	
	while( cin >> N >> n && N!=0 ){
		cin.ignore();		
		char big[N][N];
		char small[n][n], s90[n][n], s180[n][n], s270[n][n];
		int i1 = 0, i2 = 0, i3 = 0, i4 = 0;
				
		for(int i = 0; i < N; i++){
			string cadena;
			getline(cin,cadena);			
			for(int j = 0; j < cadena.size(); j++){
				big[i][j] = cadena[j];
			}
		}
		for(int i = 0; i<n; i++){
			string cadena;
			getline(cin,cadena);			
			for(int j = 0; j < cadena.size(); j++){
				small[i][j] = cadena[j];
			}
		}
		
		for(int x = 0; x <= (N-n); x++ ){
			for(int y = 0; y <= (N-n); y++){				
				bool equal = true;						
				for(int xS = 0, xB = x; xS < n; xS++, xB++){								
					for(int yS = 0, yB = y; yS < n; yS++, yB++){						
						if(  small[xS][yS] == big[xB][yB] && equal  ){
							equal = true;							
						}
						else{
							equal = false;
						}
					}										
				}				
				if(equal) i1++;								
			}						
		}

		for (int i = 0; i < n; ++i){
	        for (int j = n-1, y=0; j >= 0; j--, y++){
		    	s90[i][y] =  small[j][i];
	        }	        
	    }
	    
	    for(int x = 0; x <= (N-n); x++ ){
			for(int y = 0; y <= (N-n); y++){				
				bool equal = true;						
				for(int xS = 0, xB = x; xS < n; xS++, xB++){								
					for(int yS = 0, yB = y; yS < n; yS++, yB++){						
						if(  s90[xS][yS] == big[xB][yB] && equal  ){
							equal = true;							
						}
						else{
							equal = false;
						}
					}										
				}				
				if(equal) i2++;								
			}						
		}
		
		for (int i = 0; i < n; ++i){
	        for (int j = n-1, y=0; j >= 0; j--, y++){
		    	s180[i][y] =  s90[j][i];
	        }	        
	    }
	    
	    for(int x = 0; x <= (N-n); x++ ){
			for(int y = 0; y <= (N-n); y++){				
				bool equal = true;						
				for(int xS = 0, xB = x; xS < n; xS++, xB++){								
					for(int yS = 0, yB = y; yS < n; yS++, yB++){						
						if(  s180[xS][yS] == big[xB][yB] && equal  ){
							equal = true;							
						}
						else{
							equal = false;
						}
					}										
				}				
				if(equal) i3++;								
			}						
		}

		for (int i = 0; i < n; ++i){
	        for (int j = n-1, y=0; j >= 0; j--, y++){
		    	s270[i][y] =  s180[j][i];
	        }	        
	    }
	    
	    for(int x = 0; x <= (N-n); x++ ){
			for(int y = 0; y <= (N-n); y++){				
				bool equal = true;						
				for(int xS = 0, xB = x; xS < n; xS++, xB++){								
					for(int yS = 0, yB = y; yS < n; yS++, yB++){						
						if(  s270[xS][yS] == big[xB][yB] && equal  ){
							equal = true;							
						}
						else{
							equal = false;
						}
					}										
				}				
				if(equal) i4++;								
			}						
		}

		cout << i1 << " " << i2 << " " << i3 << " " << i4 << endl;
				
	}
	
	
	return 0;
}
