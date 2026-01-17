#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 28;              // Tag.BODY
    char entity_2[62];          // Tag.BODY
    entity_5 = 39;              // Tag.BODY
    while(entity_5 < entity_0){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_5] = '0';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER