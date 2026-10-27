// RTPG_5976: vars=4 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int b88 = 62673;
    int val86 = 9;
    int out6 = 1;
    int cnt65 = 1;
    int i;
    for (i = 0; i < 16; i++) {
        cnt65 = xn[i];
        val86 = b88 - -22;
        cnt65 = cnt65 + 5;
        out6 = out6 + 3;
        cnt65 = cnt65;
        yo[i] = val86;
    }
}
int main() { test_func(); return 0; }

