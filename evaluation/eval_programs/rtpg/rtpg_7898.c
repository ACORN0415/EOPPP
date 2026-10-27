// RTPG_7898: vars=5 stmts=3
void test_func(void) {
    int lo10 = 34;
    int res99 = -33;
    int a12 = 9;
    int b90 = -29;
    int acc97 = 62;
    int i;
    for (i = 0; i < 15; i++) {
        a12 = acc97 + a12;
        lo10 = acc97;
        acc97 = a12;
        if (acc97 != -38) {
        acc97 = acc97 + b90;
        }
    }
}
int main() { test_func(); return 0; }

