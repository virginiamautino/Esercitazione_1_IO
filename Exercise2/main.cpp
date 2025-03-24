#include <fstream>
#include <iostream>
#include <string>


// funzione per mappare l'intervallo:
double mappatura(double valore) {
	return (valore - 1.0)*3.0/4.0 - 1.0; 
	}

int main()
{
	std:: ifstream file("data.txt");
	std:: ofstream FileDiOutput("result.txt");
	
	if(file.fail()) {
		std:: cerr << "errore nell'apertura del file" << std::endl;
		return 1;
	}
	
	double val;
	double somma = 0.0;
	
	
	int i = 0;
	
	// intestazione output su file result.txt
	FileDiOutput << "# N Mean" << std::endl;
	
	while(file>>val)
	{
		i++;
		somma += val;
		double mean = somma/i;
		FileDiOutput << i << " " << mean << std::endl;
		
	}
	
	file.close();
	FileDiOutput.close();
	
    return 0;
}
