#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 78;              // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_4[82];          // Tag.BODY
    char entity_3[24];          // Tag.BODY
    char entity_9[84];          // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    entity_5 = 82;              // Tag.BODY
    entity_2 = 63;              // Tag.BODY
    entity_6 = 91;              // Tag.BODY
    if (entity_0 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 19;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_0){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_6] = '3';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9[entity_8] = 'B';   // Tag.BUFWRITE_COND_SAFE
    entity_4[entity_5] = 'X';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER