#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_6[94];          // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_3 = 34;              // Tag.BODY
    char entity_1[99];          // Tag.BODY
    entity_8 = 93;              // Tag.BODY
    entity_2 = 31;              // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    if (entity_0 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 2;               // Tag.BODY
    entity_6[entity_8] = 't';   // Tag.BUFWRITE_TAUT_SAFE
    }                           // Tag.BODY
    while(entity_2 < entity_0){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_2] = 'w';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER