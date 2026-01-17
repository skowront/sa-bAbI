#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_4[21];          // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = 77;              // Tag.BODY
    entity_0 = 58;              // Tag.BODY
    if (entity_5 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 20;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_0 < entity_5){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_7[38];          // Tag.BODY
    entity_4[entity_0] = 'p';   // Tag.BUFWRITE_COND_UNSAFE
    entity_1 = 75;              // Tag.BODY
    entity_7[entity_1] = '2';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER