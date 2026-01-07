#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_4;               // Tag.BODY
    char entity_9[55];          // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_2[37];          // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_8[86];          // Tag.BODY
    entity_0 = 4;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_4 = 10;              // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    entity_5 = 47;              // Tag.BODY
    entity_3 = 10;              // Tag.BODY
    if (entity_7 < entity_5){   // Tag.BODY
    entity_8[entity_3] = 'W';   // Tag.BUFWRITE_TAUT_SAFE
    } else {                    // Tag.BODY
    entity_7 = 24;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_7){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_4] = 'h';   // Tag.BUFWRITE_COND_SAFE
    entity_2[entity_0] = 'p';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER