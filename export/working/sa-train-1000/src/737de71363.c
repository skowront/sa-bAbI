#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_6[53];          // Tag.BODY
    char entity_9[82];          // Tag.BODY
    entity_5 = 86;              // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    entity_0 = 80;              // Tag.BODY
    entity_8 = 27;              // Tag.BODY
    entity_9[entity_8] = 'r';   // Tag.BUFWRITE_TAUT_SAFE
    if (entity_7 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 15;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_0 < entity_7){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 6;               // Tag.BODY
    entity_6[entity_0] = '0';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_2[61];          // Tag.BODY
    entity_2[entity_4] = 'c';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER