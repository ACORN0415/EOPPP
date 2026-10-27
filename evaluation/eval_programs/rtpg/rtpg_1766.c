// RTPG_1766: vars=4 stmts=5
void test_func(void) {
    int lo94 = 65;
    int cur81 = 64;
    int b34 = 47741;
    int a9 = 72;
    int i;
    for (i = 0; i < 94; i++) {
        cur81 = cur81 + lo94;
        lo94 = cur81 + a9;
        a9 = a9 + a9;
        a9 = a9 + b34;
        b34 = a9;
    }
}
int main() { test_func(); return 0; }

