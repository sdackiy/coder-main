#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "coder.h"
#include "stredit.h"

int main(int argc, char** argv) {
	if (argc == 1) {
		char codeType[6];
		char text[100];
		printf("Введите тип кодирования (caesar/xor): ");
		scanf("%s", codeType);
		if (!(strcmp(codeType, "caesar")) || !(strcmp(codeType, "xor"))) {
			printf("Введите текст, который необходимо декодировать: ");
			scanf("%s", text);
			if (!(strcmp(codeType, "caesar"))) {
				char shiftTxt[50];
				printf("Введите ключ: ");
				scanf("%s", shiftTxt);
				if (isNumber(shiftTxt)) {
					int shift = strToInt(shiftTxt);
					mutableCaesarDecode(text, shift);
					puts(text);
				}
				else {
					printf("ERROR: Неправильно введен ключ\n");
					return 1;
				}
			}

			else if (!(strcmp(codeType, "xor"))) {
				char pswd[100];
				printf("Введите ключ: ");
				scanf("%s", pswd);
				mutableXorDecode (text, pswd);
				printf("%s\n", text);
			}

		}

		else {
			printf("ERROR: Непподдерживаемый формат кодирования\n");
			return 1;
		}
	}

	else if (argc == 4) {
		if (!strcmp(*(argv + 1), "--caesar")) {
			if (isNumber(*(argv + 3))) {
				printf("Исходный текст: %s\n", *(argv + 2));
				int shift = strToInt(*(argv + 3));
				printf("Ключ: %d\n", shift);
				mutableCaesarDecode(*(argv + 2), shift);
				printf("Декодированный текст:\n");
				printf("%s\n", *(argv + 2));
			}

			else {
				printf("ERROR: Неправильно введен ключ\n");
				return 1;
			}
		}

		else if (!strcmp(*(argv + 1), "--xor")) {
			printf("Исходный текст: %s\n", *(argv + 2));
			printf("Ключ: %s\n", *(argv + 3));
			mutableXorDecode(*(argv + 2), *(argv + 3));
			printf("Декодированный текст:\n");
			printf ("%s\n", *(argv + 2));
		}
		
		else {
			printf("ERROR: неподдерживаемый формат кодирования\n");
			return 1;
		}
	}

	else {
		printf("ERROR: команда написана неверно\n");
		return 1;
	}

	return 0;
}
