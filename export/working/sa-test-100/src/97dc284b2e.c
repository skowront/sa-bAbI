#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_6[7];           // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_5 = 6;               // Tag.BODY
    int entity_4;               // Tag.BODY
    char entity_2[55];          // Tag.BODY
    char entity_0[65];          // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 81;              // Tag.BODY
    entity_8 = 11;              // Tag.BODY
    entity_2[entity_1] = 'B';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3 = 26;              // Tag.BODY
    if (entity_4 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 38;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_4){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_3] = 'J';   // Tag.BUFWRITE_COND_SAFE
    entity_6[entity_5] = 'R';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER