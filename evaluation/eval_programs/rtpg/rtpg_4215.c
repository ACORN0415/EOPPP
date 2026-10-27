// RTPG_4215: vars=10 stmts=3
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int cur31 = 10151;
    int prev35 = 1;
    int a31 = 4;
    int out49 = 3;
    int res63 = 10;
    int v72 = 8;
    int prev43 = 32;
    int z28 = 55;
    int out35 = 40440;
    int prev65 = -46;
    int i;
    for (i = 0; i < 65; i++) {
        switch (a31) {
            case 0: prev43 = 7; break;
            case 1: out35 = -13; break;
            case 2: prev65 = 8; break;
            default: break;
        }
        a31 = a31 + 1;
    }
}
int main() { test_func(); return 0; }

