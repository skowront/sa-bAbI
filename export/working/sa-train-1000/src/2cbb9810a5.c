#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    entity_2 = 30;              // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_4[81];          // Tag.BODY
    entity_1 = 58;              // Tag.BODY
    entity_0 = 25;              // Tag.BODY
    char entity_5[46];          // Tag.BODY
    if (entity_7 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5[entity_1] = 'v';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7 = 34;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_0 < entity_7){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_8[47];          // Tag.BODY
    entity_4[entity_0] = 'G';   // Tag.BUFWRITE_COND_SAFE
    int entity_3;               // Tag.BODY
    entity_3 = 59;              // Tag.BODY
    entity_8[entity_3] = 'a';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER