#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    char entity_2[24];          // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_3[24];          // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    entity_4 = 23;              // Tag.BODY
    entity_6 = 68;              // Tag.BODY
    entity_8 = 42;              // Tag.BODY
    entity_2[entity_4] = 'g';   // Tag.BUFWRITE_TAUT_SAFE
    if (entity_7 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 69;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_7){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_8] = 'n';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER