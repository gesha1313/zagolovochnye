#include "myheader.h"







int main() {
	int a = subtract(sub_A, sub_B);
	int b = add(3, 2);
	int c = multiply(10, 20);
	float d = divide(4, 2);
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%f\n", d);
	char str1[] = "\narmenia";
	char str2[] = " the best country!";
	char* join = concat(str1, str2);
	printf("result: %s\n", join);
	free(join);
	char buf[20];
	



	const char* str = "123 iq";
	int res = str_to_int(str);
	printf("%d", res);
	printf("dlina: %f\n", segment_lenght(0, 0, 3, 4));


	//переменные для координат трёх точек
	double x1, y1, x2, y2, x3, y3;

	printf("Vvedite koordinaty treh tochek (format: x y):\n");

	//ввод первой точки
	printf("Tochka 1: ");
	scanf("%lf %lf", &x1, &y1);

	//ввод второй точки
	printf("Tochka 2: ");
	scanf("%lf %lf", &x2, &y2);

	//ввод третьей точки
	printf("Tochka 3: ");
	scanf("%lf %lf", &x3, &y3);

	//передача данных в функци
	if (is_triangle(x1, y1, x2, y2, x3, y3)) {
		printf("Treugolnik est!\n");
		printf("Perimetr: %f\n", triangle_perimeter(x1, y1, x2, y2, x3, y3));
	}
	else {
		printf("Eto ne treugolnik\n");
	}
	return 0;
}





