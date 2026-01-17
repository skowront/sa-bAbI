#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_4[30];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 5;                                        // Tag.BODY
    for(entity_0 = 63; entity_0 < entity_3; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_0] = 'r';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER