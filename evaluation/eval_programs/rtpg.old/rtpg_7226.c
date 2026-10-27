// RTPG_7226: vars=3 stmts=3
void test_func(void) {
    int lo70 = 35;
    int b87 = 23165;
    int lo16 = 39;
    int h0 = 1;
    int sv0 = 0;
    int h1 = -4;
    int sv1 = 0;
    int i;
    for (i = 0; i < 55; i++) {
        lo16 = lo16 + 2;
        lo70 = b87 * 10;
        lo70 = lo70 - 3;
    }
}
int main() { test_func(); return 0; }

