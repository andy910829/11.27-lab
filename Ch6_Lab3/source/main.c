#include <stdio.h>
#include <stdlib.h>

typedef struct _student {

	char num[7];    //學號
	char class[20]; //班級
	char name[20];  //姓名
	int score[3];   //各科成績 score[0]國文 score[1]英文 score[2]數學


}student;
void sub(student *p);

int main() {
	int i;
	student stud[3] = { {"970101","四子一甲","王小明",61,71,81},
						{"970102","四子一甲","李中雄",92,82,72},
						{"970103","四子一甲","張大成",73,63,83} };

	student*ps;
	ps = stud;
	printf("\n");
	printf("=================================================\n");
	printf("  學號  班級\t姓名\t  國文  英文  數學\n");
	printf("=================================================\n");

	for (i = 0; i < 3; i++) {
		printf("%6s %-10s %-8s %4d %4d %4d\n", (ps + i)->num, (ps + i)->class,
			(ps + i)->name, (ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);

	}
	printf("\t呼叫函式前\n\n");
	sub(ps);
	printf("\n\t呼叫函式前\n");

	for (i = 0; i < 3; i++) {
		printf("%6s %-10s %-8s %4d %4d %4d\n", (ps + i)->num, (ps + i)->class,
			(ps + i)->name, (ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);

	}
	printf("\n");
	system("pause");
	return 0;

}
void sub(student*p) {
	for (int i = 0; i < 3; i++) {
		(p + i)->score[0] += 10;
		(p + i)->score[1] += 10;
		(p + i)->score[2] += 10;
	}

}