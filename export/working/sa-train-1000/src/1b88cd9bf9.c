#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    char entity_1[58];        // Tag.BODY
    entity_6 = 26;            // Tag.BODY
    if(entity_8 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 24;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_8] = 'P'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER