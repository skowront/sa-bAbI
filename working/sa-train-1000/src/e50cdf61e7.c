#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_0 = 41;            // Tag.BODY
    char entity_7[73];        // Tag.BODY
    entity_1 = 38;            // Tag.BODY
    if(entity_1 < entity_0){  // Tag.BODY
    entity_1 = 40;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 23;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_1] = 'P'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER