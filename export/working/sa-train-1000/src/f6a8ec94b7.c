#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    char entity_1[44];          // Tag.BODY
    entity_6 = 98;              // Tag.BODY
    entity_5 = 33;              // Tag.BODY
    if (entity_9 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 17;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_9){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_5] = 'x';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER