// RTPG_7411: vars=4 stmts=4
int xn[64];
int yo[64];
struct Data { int a; int b; };
void test_func(void) {
    int out51 = 60009;
    int cur57 = 42;
    int x25 = 56270;
    int val63 = 17362;
    struct Data s; s.a = 61342; s.b = 30;
    int *ptr = &val63;
    int i;
    for (i = 0; i < 64; i++) {
        val63 = xn[i];
        x25 = out51 - val63;
        val63 = cur57;
        out51 = cur57 - out51;
        val63 = x25 - cur57;
        *ptr = *ptr + 5;
        s.a = s.a + s.b;
        yo[i] = cur57;
    }
}
int main() { test_func(); return 0; }

