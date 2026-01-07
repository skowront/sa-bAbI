#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_7[16];          // Tag.BODY
    entity_3 = 60;              // Tag.BODY
    entity_0 = 80;              // Tag.BODY
    if (entity_4 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 79;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_0 < entity_4){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_7[entity_0] = 'S';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_5[83];          // Tag.BODY
    entity_6 = 1;               // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_9[17];          // Tag.BODY
    entity_9[entity_6] = '6';   // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = 5;               // Tag.BODY
    entity_5[entity_1] = 'I';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER