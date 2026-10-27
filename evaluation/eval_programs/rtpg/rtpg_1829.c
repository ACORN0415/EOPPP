// RTPG_1829: vars=3 stmts=3
void test_func(void) {
    int cur90 = 66;
    int z8 = 35136;
    int y23 = 67;
    int h0 = 10;
    int sv0 = 0;
    int h1 = 15;
    int sv1 = 0;
    int i;
    for (i = 0; i < 5; i++) {
        switch (cur90) {
            case 0: z8 = 34; break;
            case 1: cur90 = 41893; break;
            default: break;
        }
        cur90 = cur90 + 1;
    }
}
int main() { test_func(); return 0; }

