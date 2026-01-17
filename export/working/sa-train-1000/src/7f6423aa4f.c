#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_6[97];        // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    entity_1 = 59;            // Tag.BODY
    if(entity_4 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 17;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_4] = 'U'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER