#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    char entity_2[84];          // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_8[12];          // Tag.BODY
    entity_3 = 13;              // Tag.BODY
    entity_7 = 90;              // Tag.BODY
    entity_9 = 36;              // Tag.BODY
    if (entity_0 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 90;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_7 < entity_0){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_7] = 'c';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_6;               // Tag.BODY
    entity_2[entity_9] = 'f';   // Tag.BUFWRITE_TAUT_SAFE
    entity_6 = 45;              // Tag.BODY
    char entity_5[29];          // Tag.BODY
    entity_5[entity_6] = 'u';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER