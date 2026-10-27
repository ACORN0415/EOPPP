// RTPG_3127: vars=3 stmts=8
void test_func(void) {
    int hi98 = 16;
    int acc90 = 92;
    int val23 = 7;
    int i;
    for (i = 0; i < 82; i++) {
        switch (val23) {
            case 0: val23 = -46; break;
            case 1: val23 = 12; break;
            case 2: hi98 = 37438; break;
            case 3: acc90 = 10; break;
            default: break;
        }
        val23 = val23 + 1;
    }
}
int main() { test_func(); return 0; }

