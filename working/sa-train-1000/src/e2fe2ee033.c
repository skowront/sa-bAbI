#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    char entity_2[85];          // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 2;               // Tag.BODY
    entity_5 = 82;              // Tag.BODY
    if (entity_1 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 41;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_1){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_4] = 'R';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER