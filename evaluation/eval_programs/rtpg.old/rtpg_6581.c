// RTPG_6581: vars=5 stmts=11
void test_func(void) {
    int cur80 = 10654;
    int y44 = 100;
    int c7 = 0;
    int a90 = 66;
    int cur15 = 7;
    int i;
    for (i = 0; i < 37; i++) {
        c7 = y44 + 48;
        cur15 = cur15 - 1;
        y44 = cur15 - 4;
        a90 = a90 - 3;
        c7 = c7 - 1;
        a90 = cur15 + y44;
        c7 = c7;
        c7 = a90;
        cur15 = cur80 - y44;
        y44 = y44;
        cur15 = c7 - y44;
    }
}
int main() { test_func(); return 0; }

