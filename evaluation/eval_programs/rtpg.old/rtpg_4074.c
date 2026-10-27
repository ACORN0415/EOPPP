// RTPG_4074: vars=4 stmts=7
void test_func(void) {
    int b3 = 51728;
    int x41 = 29424;
    int z18 = 6;
    int out79 = 10;
    int h0 = 4;
    int sv0 = 0;
    int h1 = 50;
    int sv1 = 0;
    int i;
    for (i = 0; i < 87; i++) {
        x41 = b3 * 1;
        x41 = x41;
        z18 = b3;
        z18 = z18;
        out79 = b3;
        x41 = out79 * 9;
        z18 = z18 - 4;
    }
}
int main() { test_func(); return 0; }

