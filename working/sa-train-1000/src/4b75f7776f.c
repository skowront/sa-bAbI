#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_9[74];        // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 90;            // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    if(entity_4 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 87;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_4] = 'i'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER