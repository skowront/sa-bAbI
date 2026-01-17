#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_8 = 58;            // Tag.BODY
    entity_5 = 49;            // Tag.BODY
    char entity_4[6];         // Tag.BODY
    if(entity_8 < entity_5){  // Tag.BODY
    entity_8 = 12;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 60;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_8] = 'N'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER