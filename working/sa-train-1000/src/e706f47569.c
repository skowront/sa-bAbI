#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_8[9];           // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    char entity_2[93];          // Tag.BODY
    entity_3 = 40;              // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 22;              // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 63;              // Tag.BODY
    if (entity_5 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 95;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_5){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    entity_8[entity_6] = 'T';   // Tag.BUFWRITE_TAUT_UNSAFE
    }                           // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 33;              // Tag.BODY
    char entity_1[14];          // Tag.BODY
    entity_1[entity_4] = 'd';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_3] = 'T';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER