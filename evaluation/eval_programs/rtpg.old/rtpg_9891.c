// RTPG_9891: vars=4 stmts=10
struct Point { int a; int b; };
void test_func(void) {
    int sum63 = 66;
    int y14 = 15;
    int cnt86 = 62;
    int val65 = 45;
    struct Point s; s.a = 3; s.b = 12888;
    int h0 = 1;
    int sv0 = 0;
    int h1 = 10;
    int sv1 = 0;
    int i;
    for (i = 0; i < 74; i++) {
        y14 = sum63 % cnt86;
        val65 = y14;
        sum63 = val65 - 22359;
        val65 = cnt86 - y14;
        sum63 = sum63 + 2;
        cnt86 = y14 * 29;
        cnt86 = cnt86 ^ cnt86;
        y14 = sum63 % val65;
        cnt86 = sum63;
        y14 = cnt86 * 5;
        s.a = s.a + s.b;
        if (val65 != 37) {
        sum63 = val65;
        }
    }
}
int main() { test_func(); return 0; }

