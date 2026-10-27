// RTPG_7251: vars=3 stmts=6
void test_func(void) {
    int val4 = 71;
    int b41 = 30;
    int val32 = 19;
    int h0 = 7;
    int sv0 = 0;
    int h1 = -28;
    int sv1 = 0;
    int i;
    for (i = 0; i < 68; i++) {
        val4 = val4;
        val32 = val32 + 1;
        val32 = val4 + 1;
        val32 = b41 - val32;
        b41 = b41 + val4;
        val4 = val4 - 11325;
    }
}
int main() { test_func(); return 0; }

