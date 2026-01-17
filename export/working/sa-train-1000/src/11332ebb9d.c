#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    entity_9 = 27;              // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_2[7];           // Tag.BODY
    entity_0 = 80;              // Tag.BODY
    while(entity_9 < entity_0){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 56;              // Tag.BODY
    char entity_3[35];          // Tag.BODY
    char entity_7[61];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_2[entity_9] = 'M';   // Tag.BUFWRITE_COND_UNSAFE
    entity_7[entity_4] = 'Z';   // Tag.BUFWRITE_TAUT_SAFE
    entity_6 = 15;              // Tag.BODY
    entity_3[entity_6] = 't';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER