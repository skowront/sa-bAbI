#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_6[98];          // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 64;              // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    entity_9 = 96;              // Tag.BODY
    if (entity_0 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 96;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_0){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_5] = 'L';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER