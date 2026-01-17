#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    char entity_3[41];          // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_6 = 33;              // Tag.BODY
    entity_7 = 52;              // Tag.BODY
    if (entity_2 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 94;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_2){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 98;              // Tag.BODY
    entity_3[entity_6] = 'M';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_5[89];          // Tag.BODY
    entity_5[entity_8] = '0';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER