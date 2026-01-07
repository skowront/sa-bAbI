#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 22;            // Tag.BODY
    entity_7 = 65;            // Tag.BODY
    char entity_6[9];         // Tag.BODY
    if(entity_7 < entity_3){  // Tag.BODY
    entity_7 = 17;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 97;            // Tag.BODY
    }                         // Tag.BODY
    char entity_2[45];        // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_6[entity_7] = 'd'; // Tag.BUFWRITE_COND_UNSAFE
    entity_0 = 77;            // Tag.BODY
    entity_2[entity_0] = 'B'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER