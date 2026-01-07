#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 15;              // Tag.BODY
    entity_2 = 51;              // Tag.BODY
    char entity_4[68];          // Tag.BODY
    while(entity_2 < entity_0){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_2] = 'w';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER