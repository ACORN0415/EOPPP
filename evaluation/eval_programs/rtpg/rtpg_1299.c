// RTPG_1299: vars=8 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int dat18 = 16;
    int y92 = 2;
    int x77 = 21;
    int cur5 = 4;
    int x95 = 47;
    int prev63 = 9;
    int val54 = 57716;
    int dat6 = 281;
    int i;
    for (i = 0; i < 32; i++) {
        x95 = xn[i];
        y92 = y92 + 1;
        cur5 = val54 - dat18;
        dat6 = cur5 + y92;
        val54 = prev63 - cur5;
        if (dat18 >= -50) {
        x95 = x95 - dat18;
        }
        yo[i] = x77;
    }
}
int main() { test_func(); return 0; }

