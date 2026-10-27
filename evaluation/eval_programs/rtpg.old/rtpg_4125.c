// RTPG_4125: vars=3 stmts=2
struct Data { int a; int b; };
void test_func(void) {
    int out29 = 47;
    int val5 = 49;
    int cnt94 = 11;
    struct Data s; s.a = 21903; s.b = 48017;
    int i;
    for (i = 0; i < 36; i++) {
        cnt94 = cnt94 - out29;
        cnt94 = out29 + val5;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

