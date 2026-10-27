// RTPG_3320: vars=3 stmts=7
struct Node { int a; int b; };
void test_func(void) {
    int y30 = 2;
    int cur57 = 40248;
    int b79 = 19;
    struct Node s; s.a = 19370; s.b = 3;
    int i;
    for (i = 0; i < 74; i++) {
        cur57 = cur57 - y30;
        y30 = cur57 + b79;
        b79 = b79 - cur57;
        cur57 = b79 + cur57;
        b79 = y30;
        y30 = b79 - 4503;
        b79 = y30 + 13443;
        s.a = s.a + s.b;
        if (y30 > 0) goto done;
    }
done:
    b79 = 0;
}
int main() { test_func(); return 0; }

