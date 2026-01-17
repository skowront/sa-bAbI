#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    char entity_3[48];        // Tag.BODY
    entity_8 = 1;             // Tag.BODY
    if(entity_0 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 53;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_0] = 'd'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER