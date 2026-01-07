#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_6[52];          // Tag.BODY
    entity_7 = 9;               // Tag.BODY
    entity_0 = 54;              // Tag.BODY
    entity_3 = 7;               // Tag.BODY
    char entity_4[29];          // Tag.BODY
    while(entity_7 < entity_3){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_7] = 'd';   // Tag.BUFWRITE_COND_SAFE
    entity_6[entity_0] = 'y';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER