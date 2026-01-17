#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_7 = 55;              // Tag.BODY
    entity_6 = 79;              // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 98;              // Tag.BODY
    char entity_0[85];          // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    char entity_1[50];          // Tag.BODY
    if (entity_3 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_3 = 62;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_7 < entity_3){ // Tag.BODY
    entity_1[entity_6] = 'i';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_7] = 'J';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER