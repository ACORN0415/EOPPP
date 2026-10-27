// RTPG_9317: vars=10 stmts=4
struct Data { int a; int b; };
void test_func(void) {
    int lo74 = 8;
    int prev24 = -4;
    int prev12 = 32;
    int b2 = 30462;
    int out27 = 33;
    int y78 = -36;
    int y87 = 43166;
    int sum88 = 67;
    int out51 = 17;
    int v0 = 6;
    struct Data s; s.a = 19; s.b = 49979;
    int *ptr = &b2;
    int i;
    for (i = 0; i < 62; i++) {
        b2 = prev12 + prev24;
        out51 = prev12;
        v0 = v0 - 2;
        sum88 = prev12 + b2;
        *ptr = *ptr + 4;
        s.a = s.a + s.b;
        if (prev12 >= 34) {
        sum88 = prev24;
        }
    }
}
int main() { test_func(); return 0; }

