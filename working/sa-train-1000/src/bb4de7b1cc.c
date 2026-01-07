#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_5[15];          // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_0 = 14;              // Tag.BODY
    char entity_3[46];          // Tag.BODY
    entity_8 = 64;              // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    entity_7 = 46;              // Tag.BODY
    if (entity_1 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 95;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_0 < entity_1){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_0] = 'U';   // Tag.BUFWRITE_COND_UNSAFE
    entity_5[entity_7] = 'T';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER