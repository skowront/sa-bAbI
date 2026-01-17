#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_1[78];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_2 = 26;                                       // Tag.BODY
    for(entity_5 = 78; entity_5 < entity_2; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_5] = 'z';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER