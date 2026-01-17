#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_1 = 70;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_8[89];                                   // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    if (entity_5 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 85;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 49; entity_0 < entity_5; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = 58;                                       // Tag.BODY
    entity_8[entity_0] = '9';                            // Tag.BUFWRITE_COND_SAFE
    char entity_2[85];                                   // Tag.BODY
    entity_2[entity_6] = 'C';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER