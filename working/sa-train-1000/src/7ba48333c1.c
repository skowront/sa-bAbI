#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_4[16];        // Tag.BODY
    entity_3 = 83;            // Tag.BODY
    entity_1 = 82;            // Tag.BODY
    if(entity_1 < entity_3){  // Tag.BODY
    entity_1 = 82;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 10;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_1] = 'Y'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER