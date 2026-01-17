#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    char entity_1[88];          // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_2 = 60;              // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    entity_4 = 68;              // Tag.BODY
    char entity_6[97];          // Tag.BODY
    entity_9 = 49;              // Tag.BODY
    if (entity_7 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 21;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_7){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_2] = 'B';   // Tag.BUFWRITE_COND_SAFE
    entity_1[entity_4] = 't';   // Tag.BUFWRITE_TAUT_SAFE
    char entity_5[25];          // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 93;              // Tag.BODY
    entity_5[entity_0] = 'E';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER