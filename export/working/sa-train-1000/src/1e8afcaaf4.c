#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    char entity_7[69];          // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_4[94];          // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_0 = 78;              // Tag.BODY
    entity_8 = 68;              // Tag.BODY
    entity_1 = 91;              // Tag.BODY
    entity_4[entity_8] = 'w';   // Tag.BUFWRITE_TAUT_SAFE
    if (entity_5 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 25;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_5){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 12;              // Tag.BODY
    entity_7[entity_1] = 'i';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_3[91];          // Tag.BODY
    entity_3[entity_2] = 'b';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER