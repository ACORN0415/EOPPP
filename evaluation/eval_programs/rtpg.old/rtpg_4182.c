// RTPG_4182: vars=4 stmts=4
int xn[32];
int yo[32];
struct Data { int a; int b; };
void test_func(void) {
    int b97 = -22;
    int res78 = -4;
    int hi8 = 38;
    int prev83 = -50;
    struct Data s; s.a = -3; s.b = -29;
    int i;
    for (i = 0; i < 32; i++) {
        res78 = xn[i];
        res78 = prev83;
        res78 = hi8 - res78;
        b97 = hi8 - 35;
        res78 = res78 - 5;
        s.a = s.a + s.b;
        yo[i] = prev83;
    }
}
int main() { test_func(); return 0; }

