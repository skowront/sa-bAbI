#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_0[38];        // Tag.BODY
    int entity_4;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_4 = 33;            // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    if(entity_5 < entity_4){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 38;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_5] = 'B'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER