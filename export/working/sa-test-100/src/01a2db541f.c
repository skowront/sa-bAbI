#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_4 = 83;              // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_1 = 11;              // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    char entity_3[56];          // Tag.BODY
    if (entity_9 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 82;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_9){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_4] = 'c';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER