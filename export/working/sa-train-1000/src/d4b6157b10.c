#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_6[10];          // Tag.BODY
    entity_0 = 64;              // Tag.BODY
    char entity_8[53];          // Tag.BODY
    entity_9 = 26;              // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_6[entity_9] = 'A';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2 = 96;              // Tag.BODY
    while(entity_2 < entity_0){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_2] = 'a';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER