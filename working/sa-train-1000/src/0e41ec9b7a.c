#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_0[51];        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 95;            // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    if(entity_8 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 87;            // Tag.BODY
    }                         // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_1 = 78;            // Tag.BODY
    char entity_4[87];        // Tag.BODY
    entity_9 = 58;            // Tag.BODY
    char entity_2[27];        // Tag.BODY
    entity_0[entity_8] = 't'; // Tag.BUFWRITE_COND_UNSAFE
    entity_2[entity_9] = 'D'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_4[entity_1] = 'P'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER