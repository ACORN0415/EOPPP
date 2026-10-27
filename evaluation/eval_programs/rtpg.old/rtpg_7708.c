// RTPG_7708: vars=3 stmts=2
void test_func(void) {
    int dat7 = 1;
    int prev31 = 2;
    int sum66 = 3104;
    int i;
    for (i = 0; i < 64; i++) {
        prev31 = prev31 + 5;
        prev31 = prev31 % prev31;
    }
}
int main() { test_func(); return 0; }

