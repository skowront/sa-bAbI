#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_5 = 36;              // Tag.BODY
    char entity_2[72];          // Tag.BODY
    entity_9 = 9;               // Tag.BODY
    if (entity_0 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 17;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_0){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_6[98];          // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_2[entity_5] = 'h';   // Tag.BUFWRITE_COND_SAFE
    entity_1 = 56;              // Tag.BODY
    entity_6[entity_1] = '1';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER