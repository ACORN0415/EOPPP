// RTPG_2331: vars=10 stmts=4
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    double acc64 = 62.13;
    int prev68 = 5;
    int x44 = 37;
    int a49 = 2;
    int dat83 = 59066;
    int res9 = 0;
    double prev73 = 30.69;
    double c53 = 90.12;
    float cur26 = 49.66;
    int y45 = 6;
    int h0 = 15440;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int h2 = 26074;
    int sv2 = 0;
    int h3 = 24373;
    int sv3 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        cur26 = xn[i];
        cur26 = xn[idx_arr[i]];
        y45 = a49 * 47;
        dat83 = prev68 - dat83;
        x44 = x44 - 5;
        prev68 = x44 + prev68;
        if (acc64 >= -21) {
        prev68 = prev68 + 2;
        }
        yo[i] = acc64;
    }
}
int main() { test_func(); return 0; }

