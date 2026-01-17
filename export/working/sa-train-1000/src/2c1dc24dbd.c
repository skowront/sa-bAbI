#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_4;               // Tag.BODY
    char entity_9[82];          // Tag.BODY
    entity_4 = 48;              // Tag.BODY
    entity_6 = 4;               // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    if (entity_5 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 76;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_5){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 89;              // Tag.BODY
    entity_9[entity_6] = 'k';   // Tag.BUFWRITE_COND_SAFE
    char entity_7[13];          // Tag.BODY
    entity_7[entity_2] = 'N';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER