#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_5[38];          // Tag.BODY
    entity_6 = 22;              // Tag.BODY
    entity_3 = 73;              // Tag.BODY
    while(entity_6 < entity_3){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 16;              // Tag.BODY
    char entity_2[43];          // Tag.BODY
    entity_2[entity_7] = 'I';   // Tag.BUFWRITE_TAUT_SAFE
    entity_5[entity_6] = 'P';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER