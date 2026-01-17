#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_0[5];           // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_5[59];          // Tag.BODY
    entity_6 = 11;              // Tag.BODY
    entity_9 = 44;              // Tag.BODY
    entity_0[entity_6] = '0';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8 = 52;              // Tag.BODY
    while(entity_9 < entity_8){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_9] = 'G';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER