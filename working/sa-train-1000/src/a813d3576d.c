#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_7[34];          // Tag.BODY
    char entity_8[90];          // Tag.BODY
    entity_5 = 16;              // Tag.BODY
    entity_4 = 29;              // Tag.BODY
    entity_2 = 24;              // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    if (entity_1 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 36;              // Tag.BODY
    entity_7[entity_4] = '9';   // Tag.BUFWRITE_TAUT_SAFE
    }                           // Tag.BODY
    while(entity_2 < entity_1){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_8[entity_2] = 'I';   // Tag.BUFWRITE_COND_SAFE
    char entity_9[18];          // Tag.BODY
    entity_3 = 50;              // Tag.BODY
    entity_9[entity_3] = 'X';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER