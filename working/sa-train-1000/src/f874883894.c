#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_2[59];          // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 27;              // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    entity_9 = 5;               // Tag.BODY
    if (entity_5 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 4;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_5){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_9] = 'y';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER