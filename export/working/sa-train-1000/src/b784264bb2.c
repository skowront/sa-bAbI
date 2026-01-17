#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_9[15];          // Tag.BODY
    entity_2 = 26;              // Tag.BODY
    entity_5 = 73;              // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    if (entity_3 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_3 = 55;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_3){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_8[52];          // Tag.BODY
    entity_9[entity_5] = 'F';   // Tag.BUFWRITE_COND_UNSAFE
    entity_6 = 49;              // Tag.BODY
    entity_8[entity_6] = 'Z';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER