#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    char entity_1[35];          // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 0;               // Tag.BODY
    entity_5 = 53;              // Tag.BODY
    while(entity_5 < entity_0){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_5] = 'd';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER