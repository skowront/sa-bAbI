#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    entity_0 = 65;              // Tag.BODY
    entity_4 = 82;              // Tag.BODY
    char entity_7[72];          // Tag.BODY
    if (entity_2 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 41;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_2){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_4] = 'S';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER