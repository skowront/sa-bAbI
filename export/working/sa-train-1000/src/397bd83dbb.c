#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_9 = 99;              // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_3 = 46;              // Tag.BODY
    entity_8 = 88;              // Tag.BODY
    char entity_6[10];          // Tag.BODY
    char entity_0[1];           // Tag.BODY
    if (entity_7 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 3;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_7){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_9] = '5';   // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_5;               // Tag.BODY
    char entity_1[16];          // Tag.BODY
    entity_0[entity_8] = 'X';   // Tag.BUFWRITE_COND_UNSAFE
    entity_5 = 69;              // Tag.BODY
    entity_1[entity_5] = 'J';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER