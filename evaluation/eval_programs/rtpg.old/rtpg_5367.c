// RTPG_5367: vars=3 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int sum56 = 73;
    int lo85 = -34;
    int cur31 = 9;
    int i;
    for (i = 0; i < 64; i++) {
        cur31 = xn[i];
        sum56 = cur31 + sum56;
        sum56 = lo85 - sum56;
        sum56 = sum56 + lo85;
        sum56 = sum56 + 3;
        yo[i] = cur31;
    }
}
int main() { test_func(); return 0; }

