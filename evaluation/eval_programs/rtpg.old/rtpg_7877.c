// RTPG_7877: vars=5 stmts=3
void test_func(void) {
    int prev82 = 3;
    int b14 = -13;
    int dat1 = 3;
    int z57 = 93;
    int sum17 = 23;
    int i;
    for (i = 0; i < 96; i++) {
        switch (b14) {
            case 0: z57 = 0; break;
            case 1: b14 = 5; break;
            case 2: prev82 = 26891; break;
            default: break;
        }
        b14 = b14 + 1;
    }
}
int main() { test_func(); return 0; }

