#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    char entity_6[84];        // Tag.BODY
    entity_3 = 73;            // Tag.BODY
    if(entity_5 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 40;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_5] = 'c'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER