#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_9[66];          // Tag.BODY
    entity_3 = 46;              // Tag.BODY
    entity_2 = 25;              // Tag.BODY
    while(entity_3 < entity_2){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_3] = 'e';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER