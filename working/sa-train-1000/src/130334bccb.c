#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    char entity_6[21];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_7 = 26;                                       // Tag.BODY
    for(entity_4 = 65; entity_4 < entity_7; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_4] = '0';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER