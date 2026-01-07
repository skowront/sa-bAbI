#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    entity_6 = 47;              // Tag.BODY
    char entity_7[50];          // Tag.BODY
    entity_2 = 27;              // Tag.BODY
    if (entity_1 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 87;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_1){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_7[entity_2] = 'P';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_4[18];          // Tag.BODY
    entity_5 = 56;              // Tag.BODY
    entity_4[entity_5] = '6';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER