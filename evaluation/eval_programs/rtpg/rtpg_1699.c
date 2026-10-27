// RTPG_1699: vars=5 stmts=2
struct Data { int a; int b; };
void test_func(void) {
    int b75 = 4;
    int out37 = 7;
    int c61 = 54534;
    int z49 = 78;
    int tmp73 = 67;
    struct Data s; s.a = 29749; s.b = 89;
    int i;
    for (i = 0; i < 75; i++) {
        tmp73 = tmp73 - 3;
        z49 = c61 + out37;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

