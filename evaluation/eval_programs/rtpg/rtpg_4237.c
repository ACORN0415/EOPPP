// RTPG_4237: vars=7 stmts=7
void test_func(void) {
    int x68 = 50653;
    int v45 = 12284;
    int acc7 = 13;
    int val38 = 99;
    int cnt75 = 44;
    int acc33 = -19;
    int lo71 = 2;
    int i;
    for (i = 0; i < 60; i++) {
        cnt75 = val38 - acc7;
        x68 = acc7 & lo71;
        cnt75 = cnt75 / acc33;
        cnt75 = cnt75;
        v45 = x68 - val38;
        val38 = val38 + 1;
        val38 = val38 - x68;
    }
}
int main() { test_func(); return 0; }

