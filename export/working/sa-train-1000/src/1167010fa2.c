#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_8 = 96;            // Tag.BODY
    char entity_9[30];        // Tag.BODY
    entity_0 = 77;            // Tag.BODY
    if(entity_0 < entity_8){  // Tag.BODY
    entity_0 = 38;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 83;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_0] = 'j'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER