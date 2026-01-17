#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    char entity_5[2];           // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 76;              // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_7 = 27;              // Tag.BODY
    char entity_1[22];          // Tag.BODY
    entity_3 = 12;              // Tag.BODY
    if (entity_4 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1[entity_3] = 'e';   // Tag.BUFWRITE_TAUT_SAFE
    entity_4 = 96;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_7 < entity_4){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_5[entity_7] = 'H';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_6[29];          // Tag.BODY
    entity_2 = 30;              // Tag.BODY
    entity_6[entity_2] = 'Q';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER