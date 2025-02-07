#include "leb128_test.h"
#include "stringbuilder_test.h"
#include "typestack_test.h"
#include "opcode_test.h"

int
main(void) {
    testReadU32LEB128();
    testReadI32LEB128();
    testStringBuilder();
    testTypeStack();
    testOpcodes();
    return 0;
}
