#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_6[6];                                    // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_3 = 95;                                       // Tag.BODY
    for(entity_5 = 48; entity_5 < entity_3; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_5] = '5';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER