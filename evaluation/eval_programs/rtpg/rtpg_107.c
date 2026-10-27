// RTPG_107: vars=3 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int y46 = 33054;
    int c50 = 60;
    int v44 = 42;
    int i;
    for (i = 0; i < 64; i++) {
        v44 = xn[i];
        v44 = y46 + 12;
        y46 = y46 + v44;
        v44 = c50 + y46;
        if (c50 < -48) {
        v44 = v44;
        }
        yo[i] = c50;
    }
}
int main() { test_func(); return 0; }

