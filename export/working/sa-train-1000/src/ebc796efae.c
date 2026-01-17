#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_3[51];          // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 35;              // Tag.BODY
    entity_4 = 69;              // Tag.BODY
    while(entity_5 < entity_4){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_5] = 'p';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER