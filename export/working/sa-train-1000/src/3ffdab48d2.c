#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_4 = 88;              // Tag.BODY
    entity_1 = 92;              // Tag.BODY
    char entity_8[64];          // Tag.BODY
    while(entity_1 < entity_4){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_8[entity_1] = 's';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_6[36];          // Tag.BODY
    entity_7 = 66;              // Tag.BODY
    entity_6[entity_7] = 'o';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER