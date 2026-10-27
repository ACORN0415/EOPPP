// RTPG_4681: vars=3 stmts=4
void test_func(void) {
    int x71 = 25;
    int a44 = 2005;
    int tmp55 = 33;
    int i;
    for (i = 0; i < 67; i++) {
        tmp55 = x71;
        a44 = a44 - a44;
        x71 = x71 - 3;
        x71 = x71 + 5;
        if (x71 < 27) {
        a44 = x71;
        }
    }
}
int main() { test_func(); return 0; }

