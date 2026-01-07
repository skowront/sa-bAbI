#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 79;              // Tag.BODY
    char entity_1[39];          // Tag.BODY
    entity_3 = 87;              // Tag.BODY
    if (entity_8 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 97;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_7 < entity_8){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_2[81];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_1[entity_7] = 'S';   // Tag.BUFWRITE_COND_UNSAFE
    entity_9 = 35;              // Tag.BODY
    entity_2[entity_9] = 'L';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER