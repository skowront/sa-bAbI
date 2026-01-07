#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    char entity_4[41];                                   // Tag.BODY
    entity_6 = 86;                                       // Tag.BODY
    int entity_8;                                        // Tag.BODY
    for(entity_8 = 71; entity_8 < entity_6; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_8] = '5';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER