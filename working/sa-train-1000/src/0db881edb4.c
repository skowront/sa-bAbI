#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_7[27];          // Tag.BODY
    entity_8 = 41;              // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    entity_5 = 59;              // Tag.BODY
    if (entity_4 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 77;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_4){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_5] = '0';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER