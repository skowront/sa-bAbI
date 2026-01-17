#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    char entity_3[8];           // Tag.BODY
    char entity_5[40];          // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 50;              // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    char entity_6[33];          // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 43;              // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_7 = 63;              // Tag.BODY
    entity_6[entity_1] = 'Q';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9 = 88;              // Tag.BODY
    if (entity_2 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 56;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_2){ // Tag.BODY
    entity_3[entity_0] = 'c';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_9] = '9';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER