// RTPG_7978: vars=4 stmts=5
void test_func(void) {
    int x35 = 36143;
    double acc96 = 31.45;
    float hi74 = 46.49;
    int a9 = 3;
    int i;
    for (i = 0; i < 35; i++) {
        x35 = x35 + a9;
        x35 = hi74 - hi74;
        a9 = x35;
        acc96 = hi74 - 64;
        acc96 = x35;
    }
}
int main() { test_func(); return 0; }

