// RTPG_854: vars=6 stmts=8
struct Point { int a; int b; };
void test_func(void) {
    int sum22 = 10;
    int a46 = 7;
    int res83 = -47;
    int a96 = 70;
    int a59 = 27628;
    int b7 = 49683;
    struct Point s; s.a = 2; s.b = 21;
    int i;
    for (i = 0; i < 77; i++) {
        a96 = a96 - 2;
        b7 = a96 + sum22;
        res83 = res83 + 2;
        a59 = a59 + 63;
        a46 = res83 + res83;
        b7 = sum22 - a59;
        a46 = a96;
        res83 = sum22;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

