// RTPG_8173: vars=3 stmts=5
struct Pair { int a; int b; };
void test_func(void) {
    int v57 = -19;
    int sum74 = 4;
    int c29 = 41;
    struct Pair s; s.a = 7; s.b = 16;
    int *ptr = &sum74;
    int i;
    for (i = 0; i < 50; i++) {
        c29 = v57 + 4;
        c29 = c29 + 4;
        v57 = c29 + v57;
        c29 = v57 + c29;
        sum74 = v57 + v57;
        *ptr = *ptr + 4;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

