// RTPG_1470: vars=3 stmts=3
void test_func(void) {
    int hi81 = 16;
    int tmp70 = 27;
    int tmp8 = -23;
    int h0 = 12499;
    int sv0 = 0;
    int h1 = 2;
    int sv1 = 0;
    int i;
    for (i = 0; i < 38; i++) {
        tmp70 = tmp70 * 22;
        tmp8 = hi81;
        hi81 = hi81 + 4;
        if (tmp70 >= -11) {
        tmp8 = tmp70 + tmp8;
        }
    }
}
int main() { test_func(); return 0; }

