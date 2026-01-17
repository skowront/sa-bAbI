#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_5 = 46;            // Tag.BODY
    entity_7 = rand();        // Tag.BODY
    entity_3 = 6;             // Tag.BODY
    char entity_6[87];        // Tag.BODY
    char entity_0[81];        // Tag.BODY
    if(entity_7 < entity_5){  // Tag.BODY
    entity_6[entity_3] = 'K'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_7 = 90;            // Tag.BODY
    }                         // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_0[entity_7] = 'J'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_2[66];        // Tag.BODY
    entity_8 = 0;             // Tag.BODY
    entity_2[entity_8] = 'b'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER