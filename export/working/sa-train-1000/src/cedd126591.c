#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_2[63];          // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 79;              // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    entity_6 = 95;              // Tag.BODY
    if (entity_1 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 6;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_1){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = 0;               // Tag.BODY
    entity_8 = 87;              // Tag.BODY
    entity_2[entity_4] = 'd';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_7[10];          // Tag.BODY
    entity_7[entity_8] = 'Y';   // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_5[79];          // Tag.BODY
    entity_5[entity_3] = 'h';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER