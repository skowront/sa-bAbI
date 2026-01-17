#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_8[69];        // Tag.BODY
    entity_0 = 62;            // Tag.BODY
    entity_4 = 21;            // Tag.BODY
    if(entity_0 < entity_4){  // Tag.BODY
    entity_0 = 45;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 9;             // Tag.BODY
    }                         // Tag.BODY
    char entity_9[75];        // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_8[entity_0] = 'k'; // Tag.BUFWRITE_COND_SAFE
    entity_6 = 46;            // Tag.BODY
    entity_9[entity_6] = 'y'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER