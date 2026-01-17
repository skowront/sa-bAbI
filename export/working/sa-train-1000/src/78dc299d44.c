#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_5[40];        // Tag.BODY
    int entity_0;             // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_2[57];        // Tag.BODY
    entity_9 = 33;            // Tag.BODY
    entity_0 = 33;            // Tag.BODY
    entity_1 = 84;            // Tag.BODY
    if(entity_1 < entity_9){  // Tag.BODY
    entity_2[entity_0] = 'a'; // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = 54;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 53;            // Tag.BODY
    }                         // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_3[60];        // Tag.BODY
    entity_5[entity_1] = '8'; // Tag.BUFWRITE_COND_UNSAFE
    entity_4 = 13;            // Tag.BODY
    entity_3[entity_4] = 'U'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER