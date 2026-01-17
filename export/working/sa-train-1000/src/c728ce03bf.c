#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 51;              // Tag.BODY
    char entity_4[72];          // Tag.BODY
    entity_9 = 17;              // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    entity_1 = 5;               // Tag.BODY
    char entity_3[2];           // Tag.BODY
    if (entity_7 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 95;              // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_9] = 'o';   // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_5 < entity_7){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_2[67];          // Tag.BODY
    entity_4[entity_5] = 'G';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_0;               // Tag.BODY
    entity_0 = 58;              // Tag.BODY
    entity_2[entity_0] = 'I';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER