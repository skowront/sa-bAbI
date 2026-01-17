#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_9[56];          // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_1[93];          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    entity_6 = 58;              // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_8 = 64;              // Tag.BODY
    entity_3 = 64;              // Tag.BODY
    if (entity_4 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 57;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_4){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_3] = 'x';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1[entity_6] = 's';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER