#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_1[52];          // Tag.BODY
    entity_5 = 45;              // Tag.BODY
    entity_2 = 64;              // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    if (entity_4 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 62;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_4){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_5] = 'q';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER