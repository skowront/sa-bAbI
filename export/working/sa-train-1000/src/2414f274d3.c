#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_1[67];          // Tag.BODY
    entity_5 = 9;               // Tag.BODY
    entity_6 = 66;              // Tag.BODY
    if (entity_0 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 62;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_0){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_5] = 'T';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER