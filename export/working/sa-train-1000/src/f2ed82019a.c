#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    char entity_5[4];           // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_3 = 39;              // Tag.BODY
    entity_0 = 13;              // Tag.BODY
    while(entity_3 < entity_0){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_3] = 'q';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER