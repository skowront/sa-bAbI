#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_5[93];                                   // Tag.BODY
    entity_1 = 97;                                       // Tag.BODY
    for(entity_2 = 52; entity_2 < entity_1; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_2] = 'E';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER