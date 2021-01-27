#include <stdbool.h>

#ifndef STREDIT
#define STREDIT

int strToInt(const char* str);

void mutableToLower (char* str);
char* immutableToLower (const char* str);

void mutableToUpper (char* str);
char* immutableToUpper (const char* str);

void mutableStrip (char* str);
char* immutableStrip (const char* str);

void mutableRemoveSpaces (char* str);
char* immutableRemoveSpaces (const char* str);

void mutableFilter (char* str);
char* immutableFilter (const char* str);

bool isNumber (const char* str);

bool isAlpha (const char* str);

#endif