#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_3[49];        // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_5;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_5 = 87;            // Tag.BODY
    char entity_0[57];        // Tag.BODY
    entity_1 = 37;            // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    entity_2 = 26;            // Tag.BODY
    char entity_4[69];        // Tag.BODY
    entity_3[entity_2] = 'i'; // Tag.BUFWRITE_TAUT_SAFE
    if(entity_9 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 21;            // Tag.BODY
    entity_4[entity_1] = 'Z'; // Tag.BUFWRITE_TAUT_SAFE
    }                         // Tag.BODY
    entity_0[entity_9] = 'y'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER