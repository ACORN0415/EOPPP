// RTPG_2397: vars=8 stmts=4
int xn[16];
int yo[16];
struct Node { int a; int b; };
enum State { RED, GREEN, FAST };
void test_func(void) {
    int val31 = 96;
    int cur25 = 56;
    int x33 = 15796;
    int cur88 = 28;
    int cur80 = 10;
    int c89 = 9;
    int lo29 = 58;
    int lo87 = 10;
    struct Node s; s.a = 31191; s.b = 9;
    enum State st = RED;
    int *ptr = &cur88;
    int i;
    for (i = 0; i < 16; i++) {
        lo87 = xn[i];
        cur88 = cur88 - 1;
        c89 = c89 - cur25;
        x33 = cur25;
        cur80 = cur80 - 2;
        *ptr = *ptr + 1;
        s.a = s.a + s.b;
        if (x33 != 100) {
        x33 = x33 - 4;
        }
        yo[i] = lo29;
    }
}
int main() { test_func(); return 0; }

