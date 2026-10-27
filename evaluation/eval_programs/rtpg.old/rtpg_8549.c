// RTPG_8549: vars=8 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int z0 = 16;
    int v84 = 6259;
    int lo39 = 5;
    int cur85 = 3;
    int v6 = 7;
    int z99 = 71;
    int res43 = 24858;
    int c97 = 19;
    int *ptr = &lo39;
    int i;
    for (i = 0; i < 56; i++) {
        switch (lo39) {
            case 0: z0 = -29; break;
            case 1: v6 = 5; break;
            case 2: res43 = -6; break;
            default: break;
        }
        lo39 = lo39 + 1;
    }
}
int main() { test_func(); return 0; }

