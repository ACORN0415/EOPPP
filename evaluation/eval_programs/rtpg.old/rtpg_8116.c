// RTPG_8116: vars=4 stmts=2
struct Pair { int a; int b; };
void test_func(void) {
    int prev3 = -12;
    int res49 = 34556;
    int val36 = 44;
    int cur86 = 39362;
    struct Pair s; s.a = 44; s.b = -22;
    int i;
    for (i = 0; i < 7; i++) {
        res49 = res49 + 5;
        res49 = val36 & prev3;
        s.a = s.a + s.b;
        if (prev3 == 55) {
        res49 = res49 + prev3;
        }
    }
}
int main() { test_func(); return 0; }

