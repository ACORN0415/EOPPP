// RTPG_9631: vars=7 stmts=2
void test_func(void) {
    int a16 = 5;
    int tmp7 = 4;
    int v7 = 5;
    int hi47 = 3;
    int dat36 = 4;
    int b18 = 42129;
    int sum97 = 25;
    int i;
    for (i = 0; i < 27; i++) {
        switch (b18) {
            case 0: a16 = 47; break;
            case 1: b18 = 9; break;
            case 2: a16 = 0; break;
            default: break;
        }
        b18 = b18 + 1;
    }
}
int main() { test_func(); return 0; }

