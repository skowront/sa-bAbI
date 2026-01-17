#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    char entity_4[74];          // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_6[69];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_5 = 84;              // Tag.BODY
    entity_9 = 67;              // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    entity_1 = 43;              // Tag.BODY
    if (entity_2 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 38;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_2){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_0[91];          // Tag.BODY
    entity_6[entity_1] = 'p';   // Tag.BUFWRITE_TAUT_SAFE
    entity_4[entity_9] = 'H';   // Tag.BUFWRITE_COND_UNSAFE
    entity_8 = 8;               // Tag.BODY
    entity_0[entity_8] = 'I';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER