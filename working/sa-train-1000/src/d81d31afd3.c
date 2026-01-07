#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_0[54];          // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_4 = 62;              // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 80;              // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    char entity_3[31];          // Tag.BODY
    entity_9 = 35;              // Tag.BODY
    if (entity_5 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 26;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_5){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    entity_0[entity_6] = 'M';   // Tag.BUFWRITE_TAUT_UNSAFE
    }                           // Tag.BODY
    entity_3[entity_9] = 'a';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER