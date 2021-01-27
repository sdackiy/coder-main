#ifndef CODER
#define CODER

void mutableCaesarEncode (char* str, const int key);
char* immutableCaesarEncode (const char* str, const int key);

void mutableCaesarDecode (char* str, const int key);
char* immutableCaesarDecode (const char* str, const int key);

void mutableXorEncode (char* st, const char* key);
char* immutableXorEncode (const char* st, const char* key);

void mutableXorDecode (char* st, const char* key);
char* immutableXorDecode (const char* st, const char* key);

#endif

