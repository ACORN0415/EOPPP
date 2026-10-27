// RTPG_5447: vars=6 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int sum84 = 34;
    int b81 = 8;
    float x77 = 27.39;
    int cur73 = 47906;
    int res57 = -38;
    int tmp18 = 54768;
    int i;
    for (i = 0; i < 16; i++) {
        x77 = xn[i];
        res57 = res57 - 2;
        x77 = x77 + res57;
        b81 = b81 - x77;
        b81 = sum84 - x77;
        cur73 = x77 - 5;
        x77 = x77 - tmp18;
        x77 = sum84 + b81;
        b81 = res57;
        if (sum84 > 82) {
        res57 = tmp18;
        }
        yo[i] = x77;
    }
}
int main() { test_func(); return 0; }

