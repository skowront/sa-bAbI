#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    char entity_5[47];        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = 54;            // Tag.BODY
    if(entity_0 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 21;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_0] = 'x'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER