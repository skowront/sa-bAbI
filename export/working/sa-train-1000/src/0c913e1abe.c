#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_8 = 95;            // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    char entity_6[93];        // Tag.BODY
    if(entity_5 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 51;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_5] = 'N'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER