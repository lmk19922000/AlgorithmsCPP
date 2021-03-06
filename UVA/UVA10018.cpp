#include "stdio.h"
#include "iostream"

int isPalindrome(long long);

int main(){
	long long num, total, temp, num2;
	int count;

	scanf("%lli", &total);
	while (total--){
		scanf("%lli", &num);
		count = 0;
		
		while (!isPalindrome(num)){
			temp = num;
			num2 = 0;
			while (temp > 0){
				num2 = num2 * 10 + temp % 10;
				temp /= 10;
			}
			num = num + num2;
			count++;
		}
		//num = 4294967295;
		printf("%d %lli\n", count, num);
	}

	return 0;
}

int isPalindrome(long long num){
	long long temp, num2=0;
	temp = num;
	while (temp > 0){
		num2 = num2*10+temp % 10;
		temp /= 10;
	}

	if (num == num2){
		return 1;
	}
	return 0;
}