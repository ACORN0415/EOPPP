// RTPG_9948: vars=4 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int v3 = -27;
    int v50 = 7420;
    float z36 = 94.15;
    int a14 = 52;
    int *ptr = &a14;
    int i;
    for (i = 0; i < 16; i++) {
        v50 = xn[i];
        z36 = z36 + v3;
        v50 = z36 + a14;
        z36 = z36;
        z36 = a14;
        v3 = v50 + z36;
        *ptr = *ptr + 5;
        if (v50 <= 75) {
        z36 = a14 - v3;
        }
        yo[i] = v50;
    }
}
int main() { test_func(); return 0; }

