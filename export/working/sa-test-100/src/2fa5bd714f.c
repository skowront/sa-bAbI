#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_3[93];        // Tag.BODY
    entity_7 = 7;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    if(entity_8 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 33;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_8] = 'k'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER