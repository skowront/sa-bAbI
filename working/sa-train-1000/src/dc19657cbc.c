#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    char entity_4[36];        // Tag.BODY
    entity_1 = 71;            // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    if(entity_2 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 53;            // Tag.BODY
    }                         // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_4[entity_2] = 'A'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_5[45];        // Tag.BODY
    entity_0 = 73;            // Tag.BODY
    entity_5[entity_0] = 'f'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER