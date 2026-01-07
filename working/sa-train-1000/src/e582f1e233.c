#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    char entity_7[40];                                   // Tag.BODY
    entity_4 = 24;                                       // Tag.BODY
    int entity_3;                                        // Tag.BODY
    for(entity_3 = 23; entity_3 < entity_4; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_0[71];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_7[entity_3] = 'N';                            // Tag.BUFWRITE_COND_SAFE
    entity_1 = 65;                                       // Tag.BODY
    entity_6 = 80;                                       // Tag.BODY
    entity_0[entity_6] = 'C';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_5[41];                                   // Tag.BODY
    entity_5[entity_1] = 'l';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER