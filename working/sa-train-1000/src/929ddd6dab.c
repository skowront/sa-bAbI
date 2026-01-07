#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    char entity_6[55];        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_3 = 93;            // Tag.BODY
    entity_7 = 85;            // Tag.BODY
    if(entity_7 < entity_3){  // Tag.BODY
    entity_7 = 70;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 88;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_7] = '9'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER