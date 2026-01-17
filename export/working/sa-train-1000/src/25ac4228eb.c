#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_5[41];        // Tag.BODY
    char entity_9[68];        // Tag.BODY
    entity_2 = 70;            // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    entity_5[entity_2] = '1'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1 = 82;            // Tag.BODY
    if(entity_0 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 89;            // Tag.BODY
    }                         // Tag.BODY
    char entity_8[62];        // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 69;            // Tag.BODY
    entity_9[entity_0] = '6'; // Tag.BUFWRITE_COND_UNSAFE
    entity_8[entity_6] = 'S'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER