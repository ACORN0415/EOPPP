// RTPG_6767: vars=3 stmts=11
int xn[16];
int yo[16];
struct Point { int a; int b; };
enum State { ON, RED, FAST };
void test_func(void) {
    int prev84 = 5;
    float prev68 = 46.45;
    float prev75 = 78.90;
    struct Point s; s.a = 30019; s.b = -11;
    enum State st = ON;
    int h0 = -4;
    int sv0 = 0;
    int h1 = 41;
    int sv1 = 0;
    int i;
    for (i = 0; i < 33; i++) {
        int j;
        for (j = 0; j < 7; j++) {
        prev68 = prev68 + prev75;
        prev84 = prev75 + prev68;
        prev75 = prev75 - prev68;
        prev84 = prev84 + prev68;
        prev75 = prev84 + prev68;
        prev68 = prev75;
        prev84 = prev68;
        prev68 = prev75 + 45;
        prev84 = prev68 + 24;
        prev68 = prev68 - 3;
        prev68 = prev84 - prev68;
        }
    }
}
int main() { test_func(); return 0; }

