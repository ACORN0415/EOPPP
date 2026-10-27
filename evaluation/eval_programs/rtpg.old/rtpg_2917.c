// RTPG_2917: vars=3 stmts=12
void test_func(void) {
    int x37 = 43;
    int out0 = 60634;
    int v37 = 38670;
    int i;
    for (i = 0; i < 27; i++) {
        out0 = x37 ^ out0;
        x37 = v37 - x37;
        out0 = v37 - out0;
        x37 = x37 + v37;
        x37 = x37 | v37;
        v37 = v37 & out0;
        x37 = out0 | v37;
        out0 = out0 - out0;
        v37 = v37;
        v37 = x37 - out0;
        out0 = v37 + v37;
        out0 = out0 - 3;
    }
}
int main() { test_func(); return 0; }

