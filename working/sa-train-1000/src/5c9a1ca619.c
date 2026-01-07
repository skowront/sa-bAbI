#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_1[73];          // Tag.BODY
    entity_5 = 39;              // Tag.BODY
    char entity_4[84];          // Tag.BODY
    entity_6 = 28;              // Tag.BODY
    entity_3 = 45;              // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    if (entity_7 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 54;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_7){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_3] = 'i';   // Tag.BUFWRITE_TAUT_SAFE
    entity_1[entity_6] = 'L';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER