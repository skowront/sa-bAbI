#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_4[1];           // Tag.BODY
    entity_7 = 17;              // Tag.BODY
    char entity_1[70];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_9 = 41;              // Tag.BODY
    entity_6 = 35;              // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    if (entity_8 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 65;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_8){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_4[entity_9] = 'Z';   // Tag.BUFWRITE_COND_UNSAFE
    entity_1[entity_7] = '3';   // Tag.BUFWRITE_TAUT_SAFE
    char entity_5[79];          // Tag.BODY
    entity_0 = 92;              // Tag.BODY
    entity_5[entity_0] = 'x';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER