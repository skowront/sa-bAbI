#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    char entity_4[88];          // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_5 = 64;              // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    entity_3 = 96;              // Tag.BODY
    if (entity_9 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 71;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_9){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_0[83];          // Tag.BODY
    char entity_7[6];           // Tag.BODY
    entity_4[entity_3] = 'S';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_6;               // Tag.BODY
    entity_1 = 65;              // Tag.BODY
    entity_6 = 54;              // Tag.BODY
    entity_7[entity_6] = 'X';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0[entity_1] = '4';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER