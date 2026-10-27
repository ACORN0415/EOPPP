// RTPG_4570: vars=4 stmts=8
void test_func(void) {
    int v38 = 2;
    int v75 = 56504;
    int tmp6 = 3;
    int acc55 = -17;
    int i;
    for (i = 0; i < 51; i++) {
        switch (v38) {
            case 0: acc55 = 35168; break;
            case 1: acc55 = 7; break;
            default: break;
        }
        v38 = v38 + 1;
    }
}
int main() { test_func(); return 0; }

