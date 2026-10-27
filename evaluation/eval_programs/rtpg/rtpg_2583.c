// RTPG_2583: vars=6 stmts=3
struct Data { int a; int b; };
void test_func(void) {
    int cnt30 = 67;
    int acc7 = 28;
    int y24 = 49;
    int a43 = 70;
    int z44 = 740;
    int out2 = 35158;
    struct Data s; s.a = 62; s.b = 68;
    int i;
    for (i = 0; i < 47; i++) {
        cnt30 = y24 + cnt30;
        y24 = y24 - 5;
        z44 = y24 - 49;
        s.a = s.a + s.b;
        if (a43 >= 32) {
        cnt30 = cnt30;
        }
    }
}
int main() { test_func(); return 0; }

