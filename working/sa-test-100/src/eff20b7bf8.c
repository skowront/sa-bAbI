#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_4 = 97;              // Tag.BODY
    char entity_2[86];          // Tag.BODY
    entity_9 = 28;              // Tag.BODY
    while(entity_9 < entity_4){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_2[entity_9] = 't';   // Tag.BUFWRITE_COND_UNSAFE
    entity_8 = 37;              // Tag.BODY
    entity_6 = 63;              // Tag.BODY
    char entity_0[92];          // Tag.BODY
    char entity_3[75];          // Tag.BODY
    entity_3[entity_6] = 'S';   // Tag.BUFWRITE_TAUT_SAFE
    entity_0[entity_8] = '7';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER