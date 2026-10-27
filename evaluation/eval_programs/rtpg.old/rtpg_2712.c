// RTPG_2712: vars=3 stmts=3
void test_func(void) {
    int c18 = 51;
    int sum61 = 4;
    int acc74 = 7;
    int i;
    for (i = 0; i < 28; i++) {
        switch (sum61) {
            case 0: c18 = 33; break;
            case 1: acc74 = 41; break;
            case 2: acc74 = -50; break;
            default: break;
        }
        sum61 = sum61 + 1;
    }
}
int main() { test_func(); return 0; }

