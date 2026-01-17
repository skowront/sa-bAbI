#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_8 = 46;            // Tag.BODY
    char entity_0[26];        // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    if(entity_5 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 10;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_5] = 'm'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER