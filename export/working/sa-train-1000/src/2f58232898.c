#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    entity_9 = 12;              // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 12;              // Tag.BODY
    char entity_0[17];          // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    if (entity_2 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 53;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_2){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_9] = 'L';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER