#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_6[28];          // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_4 = 35;              // Tag.BODY
    char entity_5[9];           // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    entity_8 = 19;              // Tag.BODY
    entity_7 = 71;              // Tag.BODY
    if (entity_1 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 86;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_7 < entity_1){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_8] = '5';   // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_9;               // Tag.BODY
    entity_6[entity_7] = 'n';   // Tag.BUFWRITE_COND_UNSAFE
    entity_9 = 78;              // Tag.BODY
    char entity_0[60];          // Tag.BODY
    entity_0[entity_9] = 'S';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER