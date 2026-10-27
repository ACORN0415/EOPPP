// RTPG_7018: vars=7 stmts=8
void test_func(void) {
    int val76 = 27;
    int x48 = 47;
    int x64 = 60163;
    int acc41 = 23;
    int tmp41 = 2;
    int cnt59 = 25601;
    int lo71 = 59;
    int i;
    for (i = 0; i < 69; i++) {
        x64 = x64 + 3;
        x64 = x64 + 5;
        lo71 = lo71 % cnt59;
        val76 = cnt59 + val76;
        val76 = acc41 | val76;
        cnt59 = val76 / lo71;
        tmp41 = val76 + x64;
        acc41 = x64 ^ lo71;
    }
}
int main() { test_func(); return 0; }

