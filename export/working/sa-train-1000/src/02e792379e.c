#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_4[63];          // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_8 = 26;              // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    entity_9 = 79;              // Tag.BODY
    if (entity_3 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_3 = 24;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_3){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_6[79];          // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_4[entity_9] = 'c';   // Tag.BUFWRITE_COND_UNSAFE
    entity_5 = 78;              // Tag.BODY
    entity_6[entity_5] = 'P';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER