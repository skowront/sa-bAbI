#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_5[50];        // Tag.BODY
    entity_1 = 89;            // Tag.BODY
    entity_0 = 38;            // Tag.BODY
    if(entity_1 < entity_0){  // Tag.BODY
    entity_1 = 47;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 30;            // Tag.BODY
    }                         // Tag.BODY
    char entity_2[96];        // Tag.BODY
    entity_5[entity_1] = 'X'; // Tag.BUFWRITE_COND_SAFE
    int entity_3;             // Tag.BODY
    entity_3 = 26;            // Tag.BODY
    entity_2[entity_3] = 'a'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER