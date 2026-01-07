#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_5[2];         // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 16;            // Tag.BODY
    entity_1 = 80;            // Tag.BODY
    if(entity_0 < entity_1){  // Tag.BODY
    entity_0 = 8;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 22;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_0] = '2'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_6;             // Tag.BODY
    entity_6 = 45;            // Tag.BODY
    char entity_7[7];         // Tag.BODY
    entity_7[entity_6] = 'N'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER