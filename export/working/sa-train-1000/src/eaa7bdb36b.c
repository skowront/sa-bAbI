#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    char entity_2[6];           // Tag.BODY
    entity_7 = 11;              // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 19;              // Tag.BODY
    while(entity_7 < entity_0){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_7] = 'T';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER