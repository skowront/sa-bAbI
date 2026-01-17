#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    char entity_7[94];        // Tag.BODY
    entity_0 = 45;            // Tag.BODY
    if(entity_3 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 48;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_3] = '9'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER