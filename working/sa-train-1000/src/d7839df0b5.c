#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 4;             // Tag.BODY
    char entity_7[87];        // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    if(entity_1 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 52;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_1] = 'h'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER