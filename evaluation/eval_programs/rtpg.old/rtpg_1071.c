// RTPG_1071: vars=4 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int b85 = 3;
    int res13 = 2;
    int sum72 = 36;
    int dat10 = -44;
    int i;
    for (i = 0; i < 32; i++) {
        b85 = xn[i];
        sum72 = sum72 | dat10;
        dat10 = dat10 - 2;
        b85 = dat10 & dat10;
        sum72 = sum72 + res13;
        if (dat10 == -25) {
        b85 = b85 + -37;
        }
        yo[i] = res13;
    }
}
int main() { test_func(); return 0; }

