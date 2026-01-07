#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_0[48];        // Tag.BODY
    entity_4 = 34;            // Tag.BODY
    entity_7 = 37;            // Tag.BODY
    if(entity_7 < entity_4){  // Tag.BODY
    entity_7 = 41;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 95;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_7] = 'k'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER