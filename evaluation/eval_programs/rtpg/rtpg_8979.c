// RTPG_8979: vars=3 stmts=4
int idx_arr[32];
void test_func(void) {
    int b85 = 0;
    int v26 = 2;
    int sum61 = 88;
    int h0 = -11;
    int sv0 = 0;
    int h1 = -17;
    int sv1 = 0;
    int i;
    for (i = 0; i < 20; i++) {
        switch (v26) {
            case 0: b85 = 30005; break;
            case 1: b85 = 1; break;
            case 2: b85 = 40858; break;
            default: break;
        }
        v26 = v26 + 1;
    }
}
int main() { test_func(); return 0; }

