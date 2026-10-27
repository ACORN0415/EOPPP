// RTPG_3382: vars=5 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int tmp75 = 3;
    int val61 = 8;
    int val5 = 39538;
    int out14 = 7;
    int a3 = 3;
    int i;
    for (i = 0; i < 41; i++) {
        switch (val5) {
            case 0: val61 = 28841; break;
            case 1: val61 = -18; break;
            case 2: val61 = 5; break;
            default: break;
        }
        val5 = val5 + 1;
    }
}
int main() { test_func(); return 0; }

