#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_1 = 6;               // Tag.BODY
    char entity_8[94];          // Tag.BODY
    entity_3 = 52;              // Tag.BODY
    char entity_4[37];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_8[entity_1] = 'W';   // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = 30;              // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    if (entity_6 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 84;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_0 < entity_6){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_0] = '1';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER