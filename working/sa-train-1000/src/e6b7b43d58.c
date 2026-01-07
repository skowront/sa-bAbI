#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    char entity_5[92];          // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    entity_0 = 27;              // Tag.BODY
    entity_3 = 20;              // Tag.BODY
    if (entity_9 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 10;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_0 < entity_9){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_0] = 'E';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER