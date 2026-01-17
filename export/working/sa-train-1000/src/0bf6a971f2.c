#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_5[27];        // Tag.BODY
    entity_3 = 22;            // Tag.BODY
    entity_2 = 57;            // Tag.BODY
    if(entity_2 < entity_3){  // Tag.BODY
    entity_2 = 20;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 86;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_2] = 'B'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER