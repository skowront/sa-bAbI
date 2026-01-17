#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = 58;            // Tag.BODY
    char entity_4[88];        // Tag.BODY
    entity_0 = 65;            // Tag.BODY
    if(entity_0 < entity_2){  // Tag.BODY
    entity_0 = 76;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 79;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_0] = 'a'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER