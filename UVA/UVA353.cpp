#include "stdio.h"
#include "iostream"
#include "string"
#include <set>

using namespace std;

int main(){
	string line;
	set<string> set;
	bool flag;
	int size;

	while (getline(cin, line)){
		//printf("%d\n", line.size());
		line.erase(line.find_last_not_of(" \n\r\t") + 1);
		size = line.size();
		set.clear();
		for (int i = 1; i <= size; i++){//i is the size of substring
			for (int j = 0; j <= size - i; j++){// j is the starting position of substring
				flag = true;
				for (int k = j; k<j+i; k++){
					if (line[k] != line[j + i - 1 - k+j]){
						flag = false;
						//printf("k: %d, j: %d, i: %d\n", k, j, i);
						break;
					}
				}
				if (flag){
					if (set.find(line.substr(j, i)) == set.end()){
						set.insert(line.substr(j, i));
						//printf("j: %d, i: %d\n", j, i);
						//printf("Insert: %s\n", line.substr(j, i).c_str());
					}
				}
			}
		}

		printf("The string '%s' contains %d palindromes.\n", line.c_str(), set.size());
	}
	return 0;
}