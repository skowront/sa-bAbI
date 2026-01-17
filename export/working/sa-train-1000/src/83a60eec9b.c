#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    entity_2 = 61;            // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_5[7];         // Tag.BODY
    entity_1 = 54;            // Tag.BODY
    if(entity_1 < entity_2){  // Tag.BODY
    entity_1 = 95;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 87;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_1] = 'r'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER