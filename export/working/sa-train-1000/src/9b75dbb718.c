#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    char entity_2[99];          // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 82;              // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_8 = 46;              // Tag.BODY
    char entity_0[20];          // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    entity_2[entity_8] = '2';   // Tag.BUFWRITE_TAUT_SAFE
    int entity_3;               // Tag.BODY
    entity_3 = 96;              // Tag.BODY
    if (entity_6 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 55;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_6){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_3] = 'E';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER