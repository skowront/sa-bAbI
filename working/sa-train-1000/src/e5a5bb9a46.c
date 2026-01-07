#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    char entity_6[5];           // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_9 = 26;              // Tag.BODY
    entity_4 = 55;              // Tag.BODY
    entity_0 = 2;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_1[81];          // Tag.BODY
    entity_1[entity_4] = 'n';   // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = rand();          // Tag.BODY
    if (entity_3 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_3 = 5;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_3){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_9] = 'H';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER