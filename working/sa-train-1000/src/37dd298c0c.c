#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 64;              // Tag.BODY
    char entity_5[89];          // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_3 = 68;              // Tag.BODY
    entity_0 = 2;               // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_8[82];          // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    char entity_6[50];          // Tag.BODY
    entity_4 = 0;               // Tag.BODY
    if (entity_9 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 39;              // Tag.BODY
    entity_5[entity_4] = 'r';   // Tag.BUFWRITE_TAUT_SAFE
    }                           // Tag.BODY
    while(entity_7 < entity_9){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_3] = 'f';   // Tag.BUFWRITE_TAUT_SAFE
    entity_6[entity_7] = '6';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER