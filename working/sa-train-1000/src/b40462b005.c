#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_9[10];          // Tag.BODY
    entity_6 = 33;              // Tag.BODY
    char entity_4[60];          // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_2 = 65;              // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    entity_0 = 54;              // Tag.BODY
    if (entity_8 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 98;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_8){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    entity_9[entity_0] = 'E';   // Tag.BUFWRITE_TAUT_UNSAFE
    }                           // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = 60;              // Tag.BODY
    entity_4[entity_2] = 'h';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_1[97];          // Tag.BODY
    entity_1[entity_3] = 'Q';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER