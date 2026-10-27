// RTPG_6517: vars=3 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int cur70 = 2;
    int b63 = 58;
    int sum70 = 91;
    int i;
    for (i = 0; i < 47; i++) {
        switch (b63) {
            case 0: sum70 = 55; break;
            case 1: sum70 = -1; break;
            case 2: b63 = 1; break;
            default: break;
        }
        b63 = b63 + 1;
    }
}
int main() { test_func(); return 0; }

