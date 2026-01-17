#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_6 = 99;              // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 75;              // Tag.BODY
    entity_0 = 8;               // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    char entity_2[44];          // Tag.BODY
    char entity_7[76];          // Tag.BODY
    if (entity_3 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_3 = 24;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_3){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_8] = 'E';   // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_6] = 'w';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER