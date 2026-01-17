#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    char entity_0[77];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_5 = 4;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    entity_6 = 33;              // Tag.BODY
    if (entity_7 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 47;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_7){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_5] = 'J';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER