#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_4 = 15;            // Tag.BODY
    entity_6 = 85;            // Tag.BODY
    char entity_3[53];        // Tag.BODY
    if(entity_4 < entity_6){  // Tag.BODY
    entity_4 = 58;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 56;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_4] = 'q'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER