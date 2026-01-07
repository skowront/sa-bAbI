#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_3 = 39;            // Tag.BODY
    char entity_0[14];        // Tag.BODY
    entity_1 = 96;            // Tag.BODY
    char entity_6[50];        // Tag.BODY
    if(entity_2 < entity_3){  // Tag.BODY
    entity_0[entity_1] = 'l'; // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                  // Tag.BODY
    entity_2 = 38;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_2] = 'y'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER