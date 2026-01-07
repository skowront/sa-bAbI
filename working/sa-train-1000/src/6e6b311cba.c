#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_7[0];           // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 69;              // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    char entity_0[33];          // Tag.BODY
    entity_8 = 76;              // Tag.BODY
    entity_1 = 86;              // Tag.BODY
    if (entity_3 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_3 = 55;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_3){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    entity_0[entity_1] = '7';   // Tag.BUFWRITE_TAUT_UNSAFE
    }                           // Tag.BODY
    entity_7[entity_6] = 'l';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER