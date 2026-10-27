// RTPG_1426: vars=4 stmts=9
void test_func(void) {
    int cur18 = 32683;
    int hi35 = 7718;
    int v3 = 12;
    int lo53 = 8;
    int i;
    for (i = 0; i < 76; i++) {
        switch (cur18) {
            case 0: lo53 = 6; break;
            case 1: hi35 = 68; break;
            case 2: lo53 = 64; break;
            default: break;
        }
        cur18 = cur18 + 1;
    }
}
int main() { test_func(); return 0; }

