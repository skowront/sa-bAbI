#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    char entity_1[81];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_4 = 90;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = 9;                                        // Tag.BODY
    char entity_2[6];                                    // Tag.BODY
    for(entity_8 = 34; entity_8 < entity_6; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_8] = 'T';                            // Tag.BUFWRITE_COND_SAFE
    entity_2[entity_4] = 'f';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER