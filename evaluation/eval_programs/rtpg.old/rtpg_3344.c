// RTPG_3344: vars=3 stmts=6
void test_func(void) {
    int a47 = 18;
    int y1 = 9;
    int tmp64 = -16;
    int i;
    for (i = 0; i < 45; i++) {
        y1 = y1 + 3;
        tmp64 = a47 - y1;
        y1 = tmp64 - a47;
        a47 = tmp64 - a47;
        y1 = a47 + tmp64;
        a47 = a47 - a47;
    }
}
int main() { test_func(); return 0; }

