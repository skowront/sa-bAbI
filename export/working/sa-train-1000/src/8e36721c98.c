#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    char entity_2[68];        // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_4[66];        // Tag.BODY
    entity_8 = 83;            // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 1;             // Tag.BODY
    entity_9 = 4;             // Tag.BODY
    if(entity_8 < entity_3){  // Tag.BODY
    entity_8 = 86;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2[entity_9] = 'a'; // Tag.BUFWRITE_TAUT_SAFE
    entity_8 = 55;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_8] = 'H'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER