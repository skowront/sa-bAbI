#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_3 = 97;            // Tag.BODY
    entity_7 = 43;            // Tag.BODY
    char entity_6[92];        // Tag.BODY
    if(entity_3 < entity_7){  // Tag.BODY
    entity_3 = 81;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 90;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_3] = 'b'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER