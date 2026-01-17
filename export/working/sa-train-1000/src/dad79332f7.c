#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_3[9];         // Tag.BODY
    entity_4 = 72;            // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    if(entity_0 < entity_4){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 14;            // Tag.BODY
    }                         // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 24;            // Tag.BODY
    entity_3[entity_0] = 'K'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_6[92];        // Tag.BODY
    entity_6[entity_5] = 'r'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER