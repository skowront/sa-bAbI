#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    char entity_5[91];          // Tag.BODY
    entity_4 = 36;              // Tag.BODY
    entity_8 = 67;              // Tag.BODY
    if (entity_9 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 32;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_9){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_5[entity_8] = 'r';   // Tag.BUFWRITE_COND_SAFE
    entity_2 = 84;              // Tag.BODY
    char entity_3[97];          // Tag.BODY
    entity_3[entity_2] = 'T';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER