#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 24;              // Tag.BODY
    char entity_5[47];          // Tag.BODY
    entity_0 = 24;              // Tag.BODY
    entity_3 = 59;              // Tag.BODY
    char entity_8[90];          // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    if (entity_4 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 15;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_4){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_7[92];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_8[entity_9] = 'P';   // Tag.BUFWRITE_COND_SAFE
    entity_5[entity_3] = 'T';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6 = 55;              // Tag.BODY
    entity_7[entity_6] = 'X';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER