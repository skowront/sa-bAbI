#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_7[57];          // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_8 = 79;              // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    entity_1 = 39;              // Tag.BODY
    entity_6 = 35;              // Tag.BODY
    char entity_5[57];          // Tag.BODY
    entity_0 = 91;              // Tag.BODY
    char entity_4[0];           // Tag.BODY
    if (entity_3 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4[entity_6] = 'E';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3 = 44;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_3){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_8] = 'G';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7[entity_1] = 'y';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER