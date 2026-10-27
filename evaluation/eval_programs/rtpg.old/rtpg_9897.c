// RTPG_9897: vars=7 stmts=2
void test_func(void) {
    int acc89 = 22143;
    int out21 = -29;
    int a41 = 1;
    int dat23 = 43;
    int hi32 = 14;
    int x53 = 3;
    int acc57 = 15430;
    int i;
    for (i = 0; i < 16; i++) {
        out21 = a41 + acc89;
        a41 = acc89 - acc89;
    }
}
int main() { test_func(); return 0; }

