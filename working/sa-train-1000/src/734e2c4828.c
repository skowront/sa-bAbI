#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 82;              // Tag.BODY
    entity_6 = 87;              // Tag.BODY
    char entity_7[90];          // Tag.BODY
    if (entity_1 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 90;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_1){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_6] = '4';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER