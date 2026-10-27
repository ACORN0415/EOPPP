// RTPG_1091: vars=5 stmts=3
void test_func(void) {
    int lo37 = 34;
    int sum24 = 42;
    int tmp64 = 63465;
    int b8 = 7;
    int tmp68 = 9;
    int i;
    for (i = 0; i < 7; i++) {
        tmp68 = b8 / sum24;
        lo37 = sum24 & lo37;
        tmp68 = b8 % tmp68;
    }
}
int main() { test_func(); return 0; }

