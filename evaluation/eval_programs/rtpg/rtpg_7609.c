// RTPG_7609: vars=4 stmts=11
int xn[16];
int yo[16];
void test_func(void) {
    int sum86 = 13;
    int v89 = 91;
    int y36 = 6;
    int out2 = -6;
    int i;
    for (i = 0; i < 16; i++) {
        sum86 = xn[i];
        v89 = sum86;
        v89 = sum86;
        v89 = v89 + 5;
        v89 = v89 - 5;
        out2 = v89;
        sum86 = out2 + y36;
        y36 = out2 - out2;
        sum86 = y36 - sum86;
        sum86 = y36 + sum86;
        out2 = out2 + 5;
        v89 = sum86 - 70;
        if (y36 == 4) {
        out2 = out2 - y36;
        }
        yo[i] = sum86;
    }
}
int main() { test_func(); return 0; }

