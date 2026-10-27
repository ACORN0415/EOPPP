// RTPG_4401: vars=4 stmts=7
struct Data { int a; int b; };
void test_func(void) {
    int x14 = 56550;
    int hi65 = 1;
    int hi57 = 2;
    int val19 = 46549;
    struct Data s; s.a = 77; s.b = 29;
    int i;
    for (i = 0; i < 22; i++) {
        hi65 = hi57 - hi65;
        hi57 = val19;
        hi57 = hi57 + 5;
        x14 = hi57 + hi65;
        hi65 = hi65 - hi57;
        val19 = hi65 - hi57;
        hi65 = hi65 + 5;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

