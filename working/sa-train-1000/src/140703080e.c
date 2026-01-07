#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_4[39];          // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_9[17];          // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 12;              // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    entity_6 = 12;              // Tag.BODY
    entity_5 = 39;              // Tag.BODY
    entity_9[entity_2] = 'A';   // Tag.BUFWRITE_TAUT_SAFE
    if (entity_7 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 59;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_7){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_0[66];          // Tag.BODY
    entity_4[entity_5] = 'L';   // Tag.BUFWRITE_COND_UNSAFE
    entity_1 = 39;              // Tag.BODY
    entity_0[entity_1] = 'A';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER