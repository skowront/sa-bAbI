#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    char entity_0[93];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 0;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 31;              // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    char entity_6[69];          // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_8[45];          // Tag.BODY
    entity_1 = 27;              // Tag.BODY
    entity_2 = 15;              // Tag.BODY
    if (entity_4 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6[entity_5] = 'o';   // Tag.BUFWRITE_TAUT_SAFE
    entity_0[entity_2] = 'j';   // Tag.BUFWRITE_TAUT_SAFE
    entity_4 = 4;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_4){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_9] = 'b';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER