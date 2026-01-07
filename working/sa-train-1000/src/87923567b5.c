#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    char entity_0[9];           // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_2 = 62;              // Tag.BODY
    char entity_8[41];          // Tag.BODY
    entity_9 = 87;              // Tag.BODY
    entity_4 = 88;              // Tag.BODY
    entity_8[entity_2] = 'O';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5 = rand();          // Tag.BODY
    if (entity_5 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 6;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_5){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_4] = 'B';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER