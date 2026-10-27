// RTPG_5679: vars=5 stmts=5
void test_func(void) {
    int v11 = 4;
    int cnt44 = 5;
    int x16 = 8;
    int b26 = -25;
    int acc85 = -43;
    int i;
    for (i = 0; i < 22; i++) {
        v11 = cnt44 / b26;
        acc85 = cnt44 / acc85;
        acc85 = acc85 + v11;
        cnt44 = cnt44 - 1;
        cnt44 = cnt44;
    }
}
int main() { test_func(); return 0; }

