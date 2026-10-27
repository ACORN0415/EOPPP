// RTPG_691: vars=3 stmts=4
void test_func(void) {
    int v95 = 3;
    int y42 = -31;
    int a66 = 35616;
    int i;
    for (i = 0; i < 87; i++) {
        v95 = y42 - v95;
        y42 = v95 - a66;
        a66 = a66 - y42;
        y42 = a66 - y42;
        if (a66 <= 75) {
        v95 = v95 - 2;
        }
    }
}
int main() { test_func(); return 0; }

