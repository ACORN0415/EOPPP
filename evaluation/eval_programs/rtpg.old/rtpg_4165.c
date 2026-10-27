// RTPG_4165: vars=5 stmts=3
void test_func(void) {
    int cnt17 = 3;
    int prev20 = 5;
    int tmp66 = 7;
    int z1 = 52;
    int prev10 = 97;
    int i;
    for (i = 0; i < 40; i++) {
        z1 = prev20 - z1;
        cnt17 = cnt17 + 2;
        prev20 = prev20 - tmp66;
    }
}
int main() { test_func(); return 0; }

