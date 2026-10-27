// RTPG_4822: vars=5 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int acc12 = 32;
    int x38 = -49;
    int val95 = 58;
    int b22 = 22714;
    int a77 = 65121;
    int i;
    for (i = 0; i < 32; i++) {
        b22 = xn[i];
        a77 = x38 - b22;
        val95 = x38 + 1;
        b22 = b22 + x38;
        acc12 = a77;
        x38 = acc12 - b22;
        a77 = a77 + b22;
        b22 = x38 - a77;
        x38 = b22 + -23;
        yo[i] = b22;
    }
}
int main() { test_func(); return 0; }

