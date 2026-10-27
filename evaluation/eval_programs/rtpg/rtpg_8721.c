// RTPG_8721: vars=5 stmts=8
void test_func(void) {
    int acc17 = 43631;
    int val82 = 17227;
    int cur83 = 1;
    int z30 = 4;
    int cnt99 = 4;
    int *ptr = &cur83;
    int i;
    for (i = 0; i < 21; i++) {
        switch (acc17) {
            case 0: acc17 = -32; break;
            case 1: cur83 = 2; break;
            case 2: cnt99 = 52649; break;
            case 3: acc17 = 22; break;
            default: break;
        }
        acc17 = acc17 + 1;
    }
}
int main() { test_func(); return 0; }

