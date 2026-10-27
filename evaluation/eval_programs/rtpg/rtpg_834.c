// RTPG_834: vars=3 stmts=3
void test_func(void) {
    int z35 = 54588;
    int prev41 = 35946;
    int c94 = -22;
    int h0 = 77;
    int sv0 = 0;
    int h1 = 0;
    int sv1 = 0;
    int i;
    for (i = 0; i < 15; i++) {
        switch (prev41) {
            case 0: z35 = -17; break;
            case 1: c94 = 39577; break;
            default: break;
        }
        prev41 = prev41 + 1;
    }
}
int main() { test_func(); return 0; }

