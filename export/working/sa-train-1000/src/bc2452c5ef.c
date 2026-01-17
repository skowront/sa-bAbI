#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_4[17];          // Tag.BODY
    char entity_2[46];          // Tag.BODY
    entity_0 = 44;              // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    entity_8 = 41;              // Tag.BODY
    entity_6 = 84;              // Tag.BODY
    if (entity_7 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 89;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_7){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    entity_2[entity_6] = 'j';   // Tag.BUFWRITE_TAUT_UNSAFE
    }                           // Tag.BODY
    entity_4[entity_8] = 'U';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_9[63];          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = 32;              // Tag.BODY
    entity_9[entity_3] = 'h';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER