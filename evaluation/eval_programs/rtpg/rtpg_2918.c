// RTPG_2918: vars=3 stmts=4
void test_func(void) {
    int prev75 = 20352;
    int lo70 = 1;
    int z36 = 5;
    int i;
    for (i = 0; i < 37; i++) {
        switch (prev75) {
            case 0: prev75 = 37626; break;
            case 1: lo70 = 18; break;
            case 2: z36 = 33; break;
            default: break;
        }
        prev75 = prev75 + 1;
    }
}
int main() { test_func(); return 0; }

