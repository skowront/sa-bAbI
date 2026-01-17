#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_5 = 55;              // Tag.BODY
    char entity_2[18];          // Tag.BODY
    entity_8 = 16;              // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    if (entity_1 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 11;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_1){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 82;              // Tag.BODY
    entity_2[entity_8] = '3';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_0[40];          // Tag.BODY
    entity_0[entity_6] = 'E';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER