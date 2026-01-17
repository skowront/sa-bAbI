#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_9[38];          // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_4[70];          // Tag.BODY
    entity_3 = 68;              // Tag.BODY
    entity_6 = 69;              // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    entity_2 = 35;              // Tag.BODY
    entity_9[entity_2] = 'Z';   // Tag.BUFWRITE_TAUT_SAFE
    if (entity_1 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 45;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_1){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_3] = 'm';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER