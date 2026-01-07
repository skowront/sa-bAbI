#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_5 = 24;              // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    entity_9 = 6;               // Tag.BODY
    char entity_8[37];          // Tag.BODY
    if (entity_1 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 10;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_1){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_5] = 'y';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER