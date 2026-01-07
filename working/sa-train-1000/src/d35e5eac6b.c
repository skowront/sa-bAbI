#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_9[89];          // Tag.BODY
    entity_8 = 49;              // Tag.BODY
    entity_2 = 14;              // Tag.BODY
    while(entity_2 < entity_8){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_2] = '9';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER