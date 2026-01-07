#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    entity_7 = 65;              // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_3 = 58;              // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    char entity_5[22];          // Tag.BODY
    if (entity_1 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 28;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_1){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_3] = 'c';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER