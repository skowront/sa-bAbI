#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_3[88];          // Tag.BODY
    entity_6 = 6;               // Tag.BODY
    entity_7 = 68;              // Tag.BODY
    entity_9 = 88;              // Tag.BODY
    char entity_0[70];          // Tag.BODY
    entity_0[entity_9] = 'K';   // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_7 < entity_6){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_1[45];          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_3[entity_7] = 'L';   // Tag.BUFWRITE_COND_SAFE
    entity_8 = 56;              // Tag.BODY
    entity_1[entity_8] = 'x';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER