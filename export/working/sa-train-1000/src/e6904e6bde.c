#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_6 = 62;              // Tag.BODY
    char entity_8[2];           // Tag.BODY
    entity_2 = 48;              // Tag.BODY
    if (entity_7 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 65;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_7){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_2] = 'v';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER