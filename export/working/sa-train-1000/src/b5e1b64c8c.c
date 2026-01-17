#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    char entity_4[58];          // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_3 = 92;              // Tag.BODY
    entity_0 = 60;              // Tag.BODY
    while(entity_3 < entity_0){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_4[entity_3] = 'U';   // Tag.BUFWRITE_COND_UNSAFE
    entity_6 = 83;              // Tag.BODY
    char entity_2[2];           // Tag.BODY
    entity_2[entity_6] = 'M';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER