// RTPG_7476: vars=4 stmts=4
int xn[64];
int yo[64];
struct Data { int a; int b; };
void test_func(void) {
    int cur57 = 60009;
    int out51 = 42;
    int val63 = 56270;
    int x25 = 17362;
    struct Data s; s.a = 61342; s.b = 30;
    int *ptr = &x25;
    int i;
    for (i = 0; i < 64; i++) {
        x25 = xn[i];
        val63 = cur57 - x25;
        x25 = out51;
        cur57 = out51 - cur57;
        x25 = val63 - out51;
        *ptr = *ptr + 5;
        s.a = s.a + s.b;
        yo[i] = out51;
    }
}
int main() { test_func(); return 0; }

