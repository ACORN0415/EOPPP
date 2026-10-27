// RTPG_3248: vars=6 stmts=6
struct Point { int a; int b; };
void test_func(void) {
    int prev67 = 7;
    int a68 = 36661;
    int b38 = 41253;
    int val50 = -44;
    int dat61 = 9429;
    int sum88 = 6;
    struct Point s; s.a = 27; s.b = 11;
    int i;
    for (i = 0; i < 9; i++) {
        sum88 = sum88 - 4;
        a68 = val50 % sum88;
        a68 = b38 - -5;
        sum88 = b38 | prev67;
        val50 = a68 + sum88;
        b38 = prev67 + sum88;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

