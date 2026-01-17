#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_7[60];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_5 = 95;              // Tag.BODY
    entity_4 = 95;              // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    if (entity_9 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 11;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_9){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_5] = 'o';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER