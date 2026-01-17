#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_4;               // Tag.BODY
    char entity_3[11];          // Tag.BODY
    entity_4 = 11;              // Tag.BODY
    entity_7 = 17;              // Tag.BODY
    while(entity_7 < entity_4){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_7] = 'c';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER