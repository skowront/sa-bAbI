#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_5[18];          // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = 65;              // Tag.BODY
    entity_0 = 1;               // Tag.BODY
    entity_6 = 21;              // Tag.BODY
    char entity_9[80];          // Tag.BODY
    while(entity_0 < entity_6){ // Tag.BODY
    entity_5[entity_3] = 's';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_0] = 'y';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER