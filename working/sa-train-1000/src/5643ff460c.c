#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_7 = rand();        // Tag.BODY
    entity_5 = 9;             // Tag.BODY
    char entity_3[90];        // Tag.BODY
    if(entity_7 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 69;            // Tag.BODY
    }                         // Tag.BODY
    char entity_4[96];        // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_9 = 52;            // Tag.BODY
    entity_3[entity_7] = 'n'; // Tag.BUFWRITE_COND_SAFE
    entity_4[entity_9] = 'j'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER