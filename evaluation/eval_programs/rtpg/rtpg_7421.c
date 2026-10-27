// RTPG_7421: vars=5 stmts=11
void test_func(void) {
    int prev64 = 31333;
    int prev56 = 38;
    int acc54 = 21693;
    float acc29 = 25.20;
    float out42 = 12.35;
    int i;
    for (i = 0; i < 37; i++) {
        prev64 = out42;
        out42 = prev56 + prev64;
        out42 = out42 + -26;
        out42 = out42 - prev56;
        out42 = acc29 + acc54;
        acc54 = acc29;
        acc29 = acc29 - 4;
        acc29 = prev64;
        prev64 = out42 - acc54;
        out42 = acc54 + prev64;
        acc29 = acc29 - 1;
    }
}
int main() { test_func(); return 0; }

