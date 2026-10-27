// RTPG_4211: vars=5 stmts=10
void test_func(void) {
    int prev64 = 58009;
    int v36 = 8;
    int y78 = -40;
    int res2 = 2167;
    int cur47 = 1;
    int i;
    for (i = 0; i < 21; i++) {
        switch (cur47) {
            case 0: res2 = -37; break;
            case 1: y78 = 43; break;
            case 2: prev64 = 28; break;
            case 3: res2 = 57; break;
            default: break;
        }
        cur47 = cur47 + 1;
    }
}
int main() { test_func(); return 0; }

