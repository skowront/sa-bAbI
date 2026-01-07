#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_0[23];          // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_8 = 84;              // Tag.BODY
    char entity_2[68];          // Tag.BODY
    entity_7 = 28;              // Tag.BODY
    entity_1 = 20;              // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    if (entity_3 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_3 = 75;              // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_8] = 'u';   // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_7 < entity_3){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_9[34];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 26;              // Tag.BODY
    entity_0[entity_7] = '8';   // Tag.BUFWRITE_COND_UNSAFE
    entity_9[entity_6] = '5';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER