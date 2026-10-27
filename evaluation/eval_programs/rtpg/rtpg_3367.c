// RTPG_3367: vars=3 stmts=7
void test_func(void) {
    int acc59 = 22670;
    int acc29 = 7;
    int z34 = 5;
    int i;
    for (i = 0; i < 67; i++) {
        z34 = z34 - acc29;
        acc59 = acc59 + 3;
        acc29 = acc29 + z34;
        acc29 = z34 + 4;
        acc59 = acc59 + acc59;
        z34 = z34;
        acc29 = acc29 - 1;
        if (acc29 <= 62) {
        acc29 = acc29 + 5;
        }
    }
}
int main() { test_func(); return 0; }

