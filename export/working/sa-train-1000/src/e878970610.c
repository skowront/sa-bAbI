#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_2 = 93;              // Tag.BODY
    char entity_4[58];          // Tag.BODY
    char entity_1[65];          // Tag.BODY
    entity_4[entity_2] = 'b';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9 = 76;              // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 45;              // Tag.BODY
    while(entity_7 < entity_9){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_7] = 'f';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER