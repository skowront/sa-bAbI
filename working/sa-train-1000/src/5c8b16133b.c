#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_1[31];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_3 = 72;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_6 = 36;                                       // Tag.BODY
    entity_1[entity_3] = 'n';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_8[40];                                   // Tag.BODY
    for(entity_2 = 98; entity_2 < entity_6; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_8[entity_2] = 'T';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_4 = 86;                                       // Tag.BODY
    char entity_5[78];                                   // Tag.BODY
    entity_5[entity_4] = 'B';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER