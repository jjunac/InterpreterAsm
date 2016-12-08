#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#define MAX_SIZE 10000000

int line_index = 0;

char* next_token(char str[]) {
	char res[10];
	int i = 0;
	for (int i=0; str[line_index] != ' ' || str[line_index] != '\n'; line_index++,i++) {
		res[i] = str[line_index];
	}
	res[i] = '\0';
	line_index++;
	return res;
}

void interprete(char *src_path, char *dst_path) {
	FILE* src = NULL;
	FILE* dst = NULL;

	int output;

	// Open and check the file
	fopen_s(src, src_path, "r");
	fopen_s(dst , dst_path, "w");
	if (src == NULL) {
		printf("FATAL ERROR: cannot open source file.");
		exit(1);
	} else if (dst == NULL) {
		printf("FATAL ERROR: cannot open destination file.");
		exit(1);
	}
	assert(src != NULL && dst != NULL);

	// Start translating
	

	char str[MAX_SIZE];
	fgets(str, MAX_SIZE, src);
	char instruction[] = next_token(str);

	if (strcmp(instruction, "AND")) {
		// Skip the "R"
		line_index++;
		int arg1 = atoi(next_token(str));
		line_index++;
		int arg2 = atoi(next_token(str));
		output = (0x0100000000 << 6) + (arg2 << 3) + arg1;
	}
	else if (strcmp(instruction, "EOR"))
	{

	}



}

void print_usage() {
	printf("Transforme les fichiers ASM en fichier qui peuvent etre ouvert par le micro-processeur.\n\
			Usage: interpreter src dst\n");
}

int main(int argc, char *argv[]) {
	if (argc == 3)
		interprete(argv[1], argv[2]);
	else
		print_usage();
	return 0;
}