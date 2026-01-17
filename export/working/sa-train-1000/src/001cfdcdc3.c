#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_9 = 74;            // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    char entity_2[90];        // Tag.BODY
    if(entity_6 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 70;            // Tag.BODY
    }                         // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_2[entity_6] = 'Z'; // Tag.BUFWRITE_COND_SAFE
    char entity_8[80];        // Tag.BODY
    entity_3 = 74;            // Tag.BODY
    entity_8[entity_3] = 'b'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER