#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    char entity_6[1];           // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_0 = 24;              // Tag.BODY
    entity_3 = 46;              // Tag.BODY
    entity_7 = 32;              // Tag.BODY
    char entity_4[34];          // Tag.BODY
    if (entity_2 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 97;              // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_0] = 'l';   // Tag.BUFWRITE_TAUT_SAFE
    while(entity_3 < entity_2){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_5[7];           // Tag.BODY
    entity_6[entity_3] = '8';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_8;               // Tag.BODY
    entity_8 = 33;              // Tag.BODY
    entity_5[entity_8] = 'I';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER