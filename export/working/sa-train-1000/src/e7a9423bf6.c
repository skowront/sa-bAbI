#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_1 = 94;                                       // Tag.BODY
    char entity_5[50];                                   // Tag.BODY
    for(entity_0 = 71; entity_0 < entity_1; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_0] = 'i';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER