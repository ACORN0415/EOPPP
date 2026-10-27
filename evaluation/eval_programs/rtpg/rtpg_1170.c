// RTPG_1170: vars=3 stmts=10
void test_func(void) {
    int tmp99 = 2;
    int tmp14 = 1;
    int b45 = 24;
    int i;
    for (i = 0; i < 93; i++) {
        b45 = b45 + tmp99;
        tmp14 = tmp14 % tmp99;
        tmp14 = b45 + 45718;
        b45 = tmp99;
        tmp14 = tmp99 + b45;
        tmp99 = tmp99 & b45;
        tmp99 = tmp99 - b45;
        tmp14 = b45 + tmp99;
        tmp14 = tmp14;
        tmp99 = tmp14 % tmp99;
    }
}
int main() { test_func(); return 0; }

