#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_4;               // Tag.BODY
    char entity_1[90];          // Tag.BODY
    entity_4 = 93;              // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 4;               // Tag.BODY
    if (entity_3 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_3 = 38;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_3){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_5[62];          // Tag.BODY
    char entity_8[46];          // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 68;              // Tag.BODY
    entity_7 = 95;              // Tag.BODY
    entity_8[entity_0] = 'U';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5[entity_7] = 'k';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1[entity_6] = 'Z';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER