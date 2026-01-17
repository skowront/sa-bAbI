#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_7 = 1;                                        // Tag.BODY
    char entity_5[64];                                   // Tag.BODY
    for(entity_6 = 70; entity_6 < entity_7; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_6] = 'N';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER