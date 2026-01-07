#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    entity_1 = 63;              // Tag.BODY
    char entity_7[76];          // Tag.BODY
    entity_2 = 51;              // Tag.BODY
    if (entity_9 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 54;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_9){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_6 = 57;              // Tag.BODY
    char entity_0[58];          // Tag.BODY
    entity_7[entity_2] = 'X';   // Tag.BUFWRITE_COND_SAFE
    char entity_3[79];          // Tag.BODY
    entity_8 = 98;              // Tag.BODY
    entity_0[entity_8] = 'k';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3[entity_6] = 'a';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER