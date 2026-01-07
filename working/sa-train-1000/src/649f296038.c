#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_4[24];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_9 = 61;              // Tag.BODY
    entity_5 = 78;              // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    char entity_7[25];          // Tag.BODY
    entity_7[entity_5] = 'i';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3 = 25;              // Tag.BODY
    if (entity_6 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 93;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_6){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_9] = 'T';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER