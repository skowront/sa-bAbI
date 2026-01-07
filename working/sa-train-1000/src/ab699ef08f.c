#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_4[46];          // Tag.BODY
    entity_1 = 23;              // Tag.BODY
    entity_3 = 61;              // Tag.BODY
    while(entity_1 < entity_3){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_8[96];          // Tag.BODY
    entity_4[entity_1] = 'T';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_7;               // Tag.BODY
    entity_7 = 50;              // Tag.BODY
    entity_8[entity_7] = 'a';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER