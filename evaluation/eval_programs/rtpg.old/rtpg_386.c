// RTPG_386: vars=3 stmts=4
struct Data { int a; int b; };
void test_func(void) {
    int tmp28 = 9;
    int cur94 = 31601;
    int out19 = -19;
    struct Data s; s.a = 51121; s.b = 8;
    int i;
    for (i = 0; i < 34; i++) {
        out19 = out19 - 2;
        tmp28 = tmp28 - 4;
        cur94 = cur94 - out19;
        cur94 = cur94 - 3;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

