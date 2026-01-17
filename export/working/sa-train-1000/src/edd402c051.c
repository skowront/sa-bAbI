#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_7 = 34;              // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_4[72];          // Tag.BODY
    entity_0 = 68;              // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    if (entity_8 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 87;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_7 < entity_8){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_6[97];          // Tag.BODY
    char entity_9[61];          // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_3 = 37;              // Tag.BODY
    entity_4[entity_7] = 'T';   // Tag.BUFWRITE_COND_UNSAFE
    entity_9[entity_3] = 'U';   // Tag.BUFWRITE_TAUT_SAFE
    entity_5 = 84;              // Tag.BODY
    entity_6[entity_5] = '4';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER