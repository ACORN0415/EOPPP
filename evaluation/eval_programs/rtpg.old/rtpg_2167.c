// RTPG_2167: vars=7 stmts=9
int xn[32];
int yo[32];
int idx_arr[32];
enum State { OFF, GREEN, ON };
void test_func(void) {
    int c86 = 32;
    int c64 = 41;
    int dat62 = 49;
    int sum93 = 58;
    int z85 = 35;
    int x4 = 10;
    int sum72 = 30592;
    enum State st = OFF;
    int i;
    for (i = 0; i < 32; i++) {
        c64 = xn[i];
        c64 = xn[idx_arr[i]];
        sum72 = c86 + z85;
        c86 = sum72 + c64;
        x4 = sum93;
        dat62 = c86;
        c86 = c64;
        sum72 = sum93 + c86;
        sum72 = sum93 + c64;
        dat62 = dat62 + 3;
        sum72 = c64 - 76;
        yo[i] = x4;
    }
}
int main() { test_func(); return 0; }

