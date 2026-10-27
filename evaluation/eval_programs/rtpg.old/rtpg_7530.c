// RTPG_7530: vars=7 stmts=12
struct Point { int a; int b; };
void test_func(void) {
    int prev19 = 37;
    float tmp10 = 66.86;
    int cnt81 = 77;
    int x38 = 5;
    float b63 = 37.56;
    int out16 = 7;
    int a39 = 7;
    struct Point s; s.a = 80; s.b = 13;
    int i;
    for (i = 0; i < 65; i++) {
        b63 = cnt81 + x38;
        tmp10 = b63 / x38;
        out16 = a39 + 0;
        out16 = a39 - 46;
        tmp10 = tmp10 - 5;
        x38 = b63;
        x38 = prev19 & x38;
        prev19 = prev19;
        x38 = a39;
        out16 = x38 - tmp10;
        out16 = prev19 - tmp10;
        prev19 = b63 + a39;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

