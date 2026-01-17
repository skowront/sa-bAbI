#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    char entity_4[74];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 64;              // Tag.BODY
    char entity_7[30];          // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_3 = 3;               // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 42;              // Tag.BODY
    if (entity_1 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 46;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_1){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_5[14];          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_7[entity_9] = 'Q';   // Tag.BUFWRITE_COND_UNSAFE
    entity_4[entity_6] = 'n';   // Tag.BUFWRITE_TAUT_SAFE
    entity_8 = 77;              // Tag.BODY
    entity_5[entity_8] = 'i';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER