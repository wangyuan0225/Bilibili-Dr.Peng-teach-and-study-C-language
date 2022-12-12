#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void judgeTemperature(double temperature);

int main() {
	double temperature;
	scanf("%lf", &temperature);
	judgeTemperature(temperature);
	return 0;
}

void judgeTemperature(double temperature) {
	if (36 <= temperature && temperature <= 37.3)
		printf("体温正常");
	else
		printf("体温不正常");
}