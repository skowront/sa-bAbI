#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 12;              // Tag.BODY
    char entity_7[14];          // Tag.BODY
    entity_9 = 36;              // Tag.BODY
    if (entity_3 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_3 = 32;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_3){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_9] = 'y';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER