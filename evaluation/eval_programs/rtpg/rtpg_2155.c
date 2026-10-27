// RTPG_2155: vars=4 stmts=3
int idx_arr[32];
struct Node { int a; int b; };
void test_func(void) {
    int acc29 = 10839;
    int a40 = 1;
    int y55 = 39500;
    int dat47 = 6;
    struct Node s; s.a = 96; s.b = 1571;
    int i;
    for (i = 0; i < 9; i++) {
        acc29 = xn[idx_arr[i]];
        y55 = acc29 + y55;
        y55 = dat47 - 2;
        acc29 = acc29 - 4;
        s.a = s.a + s.b;
        if (y55 == 11) {
        y55 = dat47 - y55;
        }
    }
}
int main() { test_func(); return 0; }

