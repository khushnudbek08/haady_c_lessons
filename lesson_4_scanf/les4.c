#include <stdio.h>

/* scanf funksiyasi foydalanuvchidan input olish uchun ishlatiladi
 * va ikki qiymat qabul qiladi malumot turi va uning joyi
 * tartibi: scanf("%data_type", &data_location);*/


int main()
{

	int age;
	char name[13];
	char location[21];
	char gender[6];
	char class;
	float height;

        printf("iltimos yoshingizni kiriting:\n");
	scanf("%d", &age);
	
	printf("iltimos ismingizni kiriting:\n");
	scanf("%s", name);
	
	printf("iltimos yashash hududingizning nomini kiriting:\n");
	scanf("%s", location);
	
	printf("iltimos jinsingizni kiriting:\n");
	scanf("%s", gender);
	
	printf("iltimos bo'yingizni kiriting:\n");
	scanf("%f", &height);
	
	printf("qaysi sinf vakili bo'lmoqchisiz\n |S|A|B|C| tanlang:\n");
	scanf("  %c", &class);
	
	


	printf("\n\n\n\tfoydalanuvchi haqida malumot:\n\t foydalanuvchi %c sinf vakili bo'lmoqchi\n\t ismi: %s\n\t yoshi: %d\n\t jinsi: %s\n\t balandligi: %.2f\n\t yashash hududi: %s\n\t", class, name, age, gender, height, location);
}
