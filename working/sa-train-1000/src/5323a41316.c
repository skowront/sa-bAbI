#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_9[73];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_8 = 53;              // Tag.BODY
    entity_6 = 35;              // Tag.BODY
    if (entity_2 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 30;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_2){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_8] = 'd';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER