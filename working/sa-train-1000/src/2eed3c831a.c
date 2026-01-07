#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    char entity_5[51];        // Tag.BODY
    entity_3 = 66;            // Tag.BODY
    if(entity_2 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 45;            // Tag.BODY
    }                         // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_0[48];        // Tag.BODY
    entity_6 = 7;             // Tag.BODY
    entity_0[entity_6] = 'r'; // Tag.BUFWRITE_TAUT_SAFE
    entity_5[entity_2] = '5'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER