/*Elabore uma função que receba um vetor A de dez elementos inteiros, por parâmetro. Ao final dessa função, o vetor
B deve conter o fatorial de cada elemento de A. O vetor B deve ser retornado mostrado no programa principal.*/
#include <cstdlib>
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int fact(int n) { 
   if ((n==0)||(n==1))
      return 1; 
   else
      return n*fact(n-1);
}

vector<int> arrayFactorial(vector<int> A) {
	vector<int> result;
	for (int i=0; i<A.size(); i++) {
		result.push_back(fact(A[i]));
	}
	return result;
}

int main(int argc, char *argv[])
{
	vector<int> vect{2, 1, 0, 3, 4};
	vector<int> resultado;
	resultado = arrayFactorial(vect);
	std::copy(resultado.begin(),
			resultado.end(),
			ostream_iterator<int>(cout, " "));
	system("pause");
	return 0;
}
