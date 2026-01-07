#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_3;             // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_4[88];        // Tag.BODY
    entity_9 = 36;            // Tag.BODY
    entity_3 = 3;             // Tag.BODY
    char entity_6[44];        // Tag.BODY
    entity_2 = 90;            // Tag.BODY
    entity_6[entity_9] = 'N'; // Tag.BUFWRITE_TAUT_SAFE
    if(entity_2 < entity_3){  // Tag.BODY
    entity_2 = 99;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 96;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_2] = 'T'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER