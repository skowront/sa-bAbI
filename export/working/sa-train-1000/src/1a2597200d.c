#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_7[1];                                    // Tag.BODY
    char entity_0[40];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_5 = 76;                                       // Tag.BODY
    entity_3 = 18;                                       // Tag.BODY
    for(entity_8 = 82; entity_8 < entity_5; entity_8++){ // Tag.BODY
    entity_0[entity_3] = 'n';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    entity_7[entity_8] = '5';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER