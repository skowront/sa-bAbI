#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_4[75];          // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_7[62];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_5 = 51;              // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    entity_7[entity_5] = 'J';   // Tag.BUFWRITE_TAUT_SAFE
    entity_9 = 52;              // Tag.BODY
    entity_8 = 16;              // Tag.BODY
    if (entity_6 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 36;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_6){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_2[29];          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_4[entity_9] = 'g';   // Tag.BUFWRITE_COND_SAFE
    entity_3 = 93;              // Tag.BODY
    entity_2[entity_3] = '1';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER