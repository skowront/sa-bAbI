#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    char entity_8[80];          // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_7 = 72;              // Tag.BODY
    entity_0 = 40;              // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    if (entity_3 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_3 = 74;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_7 < entity_3){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_7] = 'v';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER