#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_0[76];        // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_7 = 88;            // Tag.BODY
    entity_6 = 22;            // Tag.BODY
    char entity_2[73];        // Tag.BODY
    entity_5 = 22;            // Tag.BODY
    if(entity_7 < entity_5){  // Tag.BODY
    entity_7 = 58;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 68;            // Tag.BODY
    entity_0[entity_6] = 'K'; // Tag.BUFWRITE_TAUT_SAFE
    }                         // Tag.BODY
    entity_2[entity_7] = '4'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER