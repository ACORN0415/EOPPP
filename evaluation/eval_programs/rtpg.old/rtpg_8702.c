// RTPG_8702: vars=9 stmts=2
int xn[16];
int yo[16];
struct Point { int a; int b; };
void test_func(void) {
    int v30 = 29;
    int b45 = 23014;
    int dat13 = 10;
    int cnt17 = 1;
    int cnt89 = 4;
    int tmp44 = 52586;
    int x95 = 4;
    int b90 = 28;
    int a23 = 3;
    struct Point s; s.a = 1; s.b = 20737;
    int i;
    for (i = 0; i < 68; i++) {
        switch (cnt17) {
            case 0: cnt89 = 43635; break;
            case 1: b90 = 7741; break;
            case 2: a23 = 9083; break;
            case 3: x95 = 80; break;
            default: break;
        }
        cnt17 = cnt17 + 1;
    }
}
int main() { test_func(); return 0; }

