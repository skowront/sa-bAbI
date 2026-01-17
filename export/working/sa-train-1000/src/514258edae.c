#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_3[20];        // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_0[76];        // Tag.BODY
    entity_2 = 20;            // Tag.BODY
    entity_8 = 30;            // Tag.BODY
    entity_6 = 17;            // Tag.BODY
    if(entity_6 < entity_8){  // Tag.BODY
    entity_6 = 42;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3[entity_2] = 'r'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6 = 36;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_6] = 'F'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER