#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_7 = 87;            // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    char entity_0[36];        // Tag.BODY
    if(entity_2 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 31;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_2] = 'G'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER