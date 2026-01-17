#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_3[49];          // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_6 = 3;               // Tag.BODY
    entity_4 = 13;              // Tag.BODY
    if (entity_7 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 40;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_7){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_8[83];          // Tag.BODY
    entity_3[entity_4] = 'H';   // Tag.BUFWRITE_COND_SAFE
    entity_2 = 39;              // Tag.BODY
    entity_8[entity_2] = 'k';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER