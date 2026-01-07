#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_3 = 4;               // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    char entity_9[90];          // Tag.BODY
    entity_5 = 74;              // Tag.BODY
    char entity_8[22];          // Tag.BODY
    entity_0 = 11;              // Tag.BODY
    if (entity_4 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 76;              // Tag.BODY
    entity_8[entity_3] = 'J';   // Tag.BUFWRITE_TAUT_SAFE
    }                           // Tag.BODY
    while(entity_5 < entity_4){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_5] = 'R';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER