#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_6[39];          // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    entity_7 = 55;              // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = 79;              // Tag.BODY
    if (entity_9 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 41;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_9){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 13;              // Tag.BODY
    entity_6[entity_3] = 'K';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_0[74];          // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 56;              // Tag.BODY
    char entity_4[60];          // Tag.BODY
    entity_4[entity_2] = 'b';   // Tag.BUFWRITE_TAUT_SAFE
    entity_0[entity_1] = '5';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER