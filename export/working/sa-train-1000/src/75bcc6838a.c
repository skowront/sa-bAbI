#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    entity_5 = 82;              // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_4[89];          // Tag.BODY
    char entity_9[29];          // Tag.BODY
    entity_0 = 31;              // Tag.BODY
    entity_8 = 26;              // Tag.BODY
    entity_9[entity_8] = '6';   // Tag.BUFWRITE_TAUT_SAFE
    while(entity_0 < entity_5){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 66;              // Tag.BODY
    char entity_7[88];          // Tag.BODY
    entity_7[entity_2] = 'f';   // Tag.BUFWRITE_TAUT_SAFE
    entity_4[entity_0] = 'V';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER