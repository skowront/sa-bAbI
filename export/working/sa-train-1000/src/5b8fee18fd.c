#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    entity_5 = 40;              // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    char entity_6[10];          // Tag.BODY
    entity_1 = 85;              // Tag.BODY
    if (entity_4 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 53;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_4){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_9[51];          // Tag.BODY
    entity_6[entity_1] = 'y';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_8;               // Tag.BODY
    entity_8 = 64;              // Tag.BODY
    entity_9[entity_8] = 'u';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER