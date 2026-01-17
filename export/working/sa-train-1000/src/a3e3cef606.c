#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_4[66];                                   // Tag.BODY
    entity_7 = 67;                                       // Tag.BODY
    for(entity_6 = 54; entity_6 < entity_7; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_6] = 'q';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER