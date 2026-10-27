// RTPG_9451: vars=4 stmts=6
struct Point { int a; int b; };
void test_func(void) {
    int tmp2 = 42;
    int prev74 = 6586;
    int a23 = 75;
    int prev27 = 3;
    struct Point s; s.a = 86; s.b = 86;
    int i;
    for (i = 0; i < 83; i++) {
        prev27 = tmp2 / prev74;
        tmp2 = a23 + a23;
        prev74 = tmp2 + prev27;
        prev74 = tmp2 + prev74;
        a23 = prev27 - a23;
        prev74 = prev27 + prev74;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

