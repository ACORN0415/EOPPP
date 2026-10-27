// RTPG_9173: vars=4 stmts=3
int xn[32];
int yo[32];
struct Pair { int a; int b; };
void test_func(void) {
    float b62 = 58.60;
    int cnt16 = 51806;
    int cnt89 = 0;
    int tmp48 = 10452;
    struct Pair s; s.a = 50245; s.b = 9;
    int i;
    for (i = 0; i < 32; i++) {
        tmp48 = xn[i];
        cnt89 = cnt89 - 85;
        cnt89 = b62 + 50;
        b62 = tmp48 + 26667;
        s.a = s.a + s.b;
        yo[i] = b62;
    }
}
int main() { test_func(); return 0; }

