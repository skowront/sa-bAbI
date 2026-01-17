#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 14;              // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    char entity_0[45];          // Tag.BODY
    entity_9 = 1;               // Tag.BODY
    if (entity_1 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 2;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_1){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_9] = '7';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER