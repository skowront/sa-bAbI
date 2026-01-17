#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_3[86];          // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    entity_8 = 32;              // Tag.BODY
    entity_0 = 92;              // Tag.BODY
    if (entity_2 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 34;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_0 < entity_2){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_0] = 'k';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER