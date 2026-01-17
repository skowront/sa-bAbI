#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_7[27];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_5[86];                                   // Tag.BODY
    entity_0 = 56;                                       // Tag.BODY
    entity_2 = 62;                                       // Tag.BODY
    for(entity_4 = 83; entity_4 < entity_2; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_4] = 'S';                            // Tag.BUFWRITE_COND_SAFE
    entity_7[entity_0] = 'C';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER