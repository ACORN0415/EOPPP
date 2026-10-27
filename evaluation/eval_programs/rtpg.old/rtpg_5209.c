// RTPG_5209: vars=3 stmts=4
void test_func(void) {
    int res79 = 19715;
    int cur77 = 93;
    int v19 = 4;
    int h0 = 35911;
    int sv0 = 0;
    int h1 = 5;
    int sv1 = 0;
    int i;
    for (i = 0; i < 35; i++) {
        switch (res79) {
            case 0: cur77 = 1; break;
            case 1: res79 = 8; break;
            case 2: res79 = 3; break;
            default: break;
        }
        res79 = res79 + 1;
    }
}
int main() { test_func(); return 0; }

