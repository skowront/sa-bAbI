#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_3[52];          // Tag.BODY
    entity_4 = 26;              // Tag.BODY
    entity_7 = 88;              // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    if (entity_2 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 72;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_7 < entity_2){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_7] = 'F';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER