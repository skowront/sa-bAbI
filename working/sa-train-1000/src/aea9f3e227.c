#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    char entity_8[43];          // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_7 = 72;              // Tag.BODY
    entity_5 = 90;              // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    if (entity_1 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 10;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_7 < entity_1){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 11;              // Tag.BODY
    entity_8[entity_7] = 'y';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_2[5];           // Tag.BODY
    entity_2[entity_4] = 'f';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER