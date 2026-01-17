#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    char entity_2[93];          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_0 = 61;              // Tag.BODY
    entity_3 = 48;              // Tag.BODY
    while(entity_3 < entity_0){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_3] = 'p';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER