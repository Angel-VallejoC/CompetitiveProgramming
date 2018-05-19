#include <iostream>
using namespace std;

int main(){
	unsigned int size, position;
	
	while( cin >> size >> position && size != 0 && position != 0 ){
		int line, column;
		
		if( position == 1 ){
			line = column = (size/2)+1;	
			cout << "Line = " << line << ", column = " << column << "." << endl;		
		}
		else {
			unsigned int max, maxSize;			
			bool found = false;			
			
			for	(int i = 3; i <= size ; i += 2){								
				if(position <= (i*i)){
					line = column = ( (size/2) + 1 ) +  (i/2);
					maxSize = i;
					max = i*i;
					break;
				}
			}
					
			for(int i = 0; i < maxSize; i++){
				if( max == position ){
					cout << "Line = " << line << ", column = " << column << "." << endl;
					found = true;
					break;					
				}				
				max--;
				if ( i == maxSize-1){
					column--;
				}
				else {
					line--;
				}				
			}				
			
			if(!found){
				for(int i = 0; i < maxSize-1; i++){
					if( max == position ){
						cout << "Line = " << line << ", column = " << column << "." << endl;
						found = true;
						break;
					}				
					max--;
					if(i == maxSize-2){
						line++;
					}
					else{
						column--;
					}
				}	
			}
			
			if(!found){
				for(int i = 0; i < maxSize-1; i++){
					if( max == position ){
						cout << "Line = " << line << ", column = " << column << "." << endl;
						found = true;
						break;
					}				
					max--;					
					if( i == maxSize-2){
						column++;
					}
					else {
						line++;
					}
				}	
			}
			
			if(!found){
				for(int i = 0; i < maxSize-2; i++){
					if( max == position ){
						cout << "Line = " << line << ", column = " << column << "." << endl;
						break;
					}				
					max--;
					column++;
				}	
			}			
			
		}		
		
	}
	
	return 0;
}