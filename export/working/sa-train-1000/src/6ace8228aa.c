#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    char entity_4[49];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_9 = 93;              // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_6 = 23;              // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    if (entity_5 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 78;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_5){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_9] = 'y';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER