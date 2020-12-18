#include <stdio.h>
#include <string.h>

typedef struct STUDENT {
	char name[20];
	int age;
} Student;


int main()
{
	Student kuan = {
		"kuange",
		11	
	};	

	FILE *fp = fopen("data", "w+");
	if(!fp) {
		perror("fopen");
		return 1;
	}

	
	int block = fwrite(&kuan, sizeof(kuan), 1, fp);
	if(!block){
		perror("fwrite");	
		return 1;
	}
	
	printf("the fp position is %d\n", ftell(fp));
	//fseek(fp, 0, SEEK_SET);
	rewind(fp);

	printf("the fp position is %d\n", ftell(fp));
	
	Student newStudent;	

	int num = fread(&newStudent, sizeof(newStudent), 1, fp);

	printf("the number read is %d\n", num);

	printf("%s %d\n", newStudent.name, newStudent.age);

	fclose(fp);

	return 0;
}
