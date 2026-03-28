/*La sentencia do while

	do{
		conjunto de instrucciones;
	}while(expresión lógica);
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int i;
	
	i=0;
	
	do{
		cout<<i<<endl;
		i++;
	}while(i<=10);
	
	system("Pause");
	return 0;
}

