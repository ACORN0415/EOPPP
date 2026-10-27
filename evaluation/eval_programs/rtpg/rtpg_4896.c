// RTPG_4896: vars=3 stmts=5
struct Point { int a; int b; };
void test_func(void) {
    int res62 = 74;
    int z76 = 63051;
    int res69 = 21;
    struct Point s; s.a = 81; s.b = 24;
    int i;
    for (i = 0; i < 71; i++) {
        res69 = z76;
        res62 = res69;
        res62 = res62 + 1;
        res69 = res62 + res69;
        res62 = res62 + 3;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

