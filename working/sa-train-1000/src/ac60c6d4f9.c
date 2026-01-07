#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    char entity_2[41];        // Tag.BODY
    entity_0 = 27;            // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_9 = 33;            // Tag.BODY
    char entity_8[29];        // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 95;            // Tag.BODY
    if(entity_9 < entity_4){  // Tag.BODY
    entity_9 = 86;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 50;            // Tag.BODY
    }                         // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_8[entity_0] = 'D'; // Tag.BUFWRITE_TAUT_SAFE
    char entity_6[88];        // Tag.BODY
    entity_5 = 97;            // Tag.BODY
    entity_2[entity_9] = 'E'; // Tag.BUFWRITE_COND_UNSAFE
    entity_6[entity_5] = 'W'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER