#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_2 = 15;              // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_4 = 37;              // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    char entity_6[79];          // Tag.BODY
    if (entity_7 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 76;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_7){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_2] = 'z';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER