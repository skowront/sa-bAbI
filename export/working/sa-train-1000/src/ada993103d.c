#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    char entity_5[75];                                   // Tag.BODY
    entity_1 = 61;                                       // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_4 = 31;                                       // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_3[76];                                   // Tag.BODY
    for(entity_8 = 63; entity_8 < entity_1; entity_8++){ // Tag.BODY
    entity_5[entity_4] = 'R';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    entity_3[entity_8] = 'J';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER