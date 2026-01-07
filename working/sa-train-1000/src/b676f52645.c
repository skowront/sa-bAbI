#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 26;              // Tag.BODY
    entity_7 = 40;              // Tag.BODY
    char entity_9[14];          // Tag.BODY
    if (entity_2 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 2;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_2){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_5] = 'E';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER