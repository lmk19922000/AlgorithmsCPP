#include "stdio.h"
#include "iostream"
#include "string"
#include "sstream"

using namespace std;

int main(){
	int total, M, F;
	string line;
	stringstream ssn;
	char word[2];

	scanf("%d", &total);
	getline(cin, line);
	//printf("%d", total);
	
	while (total--){
		getline(cin, line);
		M = 0; F = 0;
		//cout << line;
		ssn.clear();
		ssn << line;
		while (ssn.good()){
			ssn >> word;
			//printf("%s ", word);
			if (word[0] == 'M'){
				M++;
			}
			else{
				F++;
			}
			if (word[1] == 'M'){
				M++;
			}
			else{
				F++;
			}
		}
		if (M == F && M!= 1){
			printf("LOOP\n");
		}
		else{
			printf("NO LOOP\n");
		}
	}
	
	return 0;
}