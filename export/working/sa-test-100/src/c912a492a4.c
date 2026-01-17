#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_4;               // Tag.BODY
    char entity_8[62];          // Tag.BODY
    entity_4 = 75;              // Tag.BODY
    entity_3 = 83;              // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    if (entity_6 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 4;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_6){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_5[94];          // Tag.BODY
    entity_8[entity_3] = '5';   // Tag.BUFWRITE_COND_UNSAFE
    entity_9 = 44;              // Tag.BODY
    entity_5[entity_9] = '4';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER