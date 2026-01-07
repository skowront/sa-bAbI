#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    char entity_0[67];          // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_7[26];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    entity_6 = 97;              // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_3 = 52;              // Tag.BODY
    entity_5 = 14;              // Tag.BODY
    if (entity_8 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 82;              // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_6] = 'S';   // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_3 < entity_8){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_3] = '7';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER