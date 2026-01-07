#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_9 = 92;              // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_8[98];          // Tag.BODY
    entity_1 = 70;              // Tag.BODY
    if (entity_7 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 71;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_7){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_1] = 'V';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER