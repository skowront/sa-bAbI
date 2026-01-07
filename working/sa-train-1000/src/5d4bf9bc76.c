#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    entity_6 = 97;              // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_9[46];          // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_1 = 65;              // Tag.BODY
    entity_2 = 31;              // Tag.BODY
    char entity_0[79];          // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    if (entity_8 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 74;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_8){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    entity_0[entity_6] = 'K';   // Tag.BUFWRITE_TAUT_UNSAFE
    }                           // Tag.BODY
    entity_9[entity_1] = 'w';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_7;               // Tag.BODY
    entity_7 = 69;              // Tag.BODY
    char entity_4[71];          // Tag.BODY
    entity_4[entity_7] = 'Q';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER