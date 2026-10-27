// RTPG_2172: vars=5 stmts=2
struct Data { int a; int b; };
void test_func(void) {
    int y13 = 79;
    int c16 = 0;
    int tmp69 = 50;
    int z89 = 7;
    int tmp89 = -8;
    struct Data s; s.a = 4; s.b = 7;
    int i;
    for (i = 0; i < 14; i++) {
        z89 = c16;
        tmp89 = c16 - c16;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

