#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_8 = 36;            // Tag.BODY
    entity_4 = 56;            // Tag.BODY
    char entity_9[84];        // Tag.BODY
    if(entity_8 < entity_4){  // Tag.BODY
    entity_8 = 96;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 72;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_8] = 'j'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER