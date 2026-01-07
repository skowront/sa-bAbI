#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    char entity_9[40];        // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 24;            // Tag.BODY
    if(entity_8 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 0;             // Tag.BODY
    }                         // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_5[16];        // Tag.BODY
    entity_6 = 57;            // Tag.BODY
    entity_5[entity_6] = 'X'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9[entity_8] = 'v'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER