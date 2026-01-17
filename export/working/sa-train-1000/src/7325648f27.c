#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_4;               // Tag.BODY
    char entity_2[83];          // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    entity_4 = 48;              // Tag.BODY
    entity_9 = 13;              // Tag.BODY
    if (entity_0 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 8;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_0){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_3[38];          // Tag.BODY
    entity_2[entity_9] = 'O';   // Tag.BUFWRITE_COND_SAFE
    entity_1 = 98;              // Tag.BODY
    entity_3[entity_1] = 'i';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER