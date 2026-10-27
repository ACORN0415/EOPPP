// RTPG_6838: vars=7 stmts=3
void test_func(void) {
    int hi38 = 33;
    int prev38 = 10;
    int z13 = -5;
    int dat32 = 15;
    int z55 = -15;
    int c76 = 10;
    int sum57 = 31074;
    int i;
    for (i = 0; i < 70; i++) {
        switch (z13) {
            case 0: prev38 = 3; break;
            case 1: hi38 = 2; break;
            default: break;
        }
        z13 = z13 + 1;
    }
}
int main() { test_func(); return 0; }

