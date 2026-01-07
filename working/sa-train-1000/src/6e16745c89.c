#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_0[68];        // Tag.BODY
    char entity_4[82];        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 49;            // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = 71;            // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    if(entity_3 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 80;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_1] = 'O'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_4[entity_3] = 'A'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER