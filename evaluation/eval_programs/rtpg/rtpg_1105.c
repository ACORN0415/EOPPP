// RTPG_1105: vars=4 stmts=10
int idx_arr[32];
struct Data { int a; int b; };
void test_func(void) {
    int y16 = 46;
    int res20 = 14;
    int acc67 = 76;
    int v66 = 69;
    struct Data s; s.a = 26; s.b = -6;
    int i;
    for (i = 0; i < 70; i++) {
        res20 = xn[idx_arr[i]];
        v66 = res20 | acc67;
        v66 = v66 / y16;
        acc67 = acc67 / res20;
        acc67 = acc67 % res20;
        res20 = res20 - 9;
        y16 = res20 + 1886;
        v66 = v66 - 1;
        y16 = res20 | v66;
        res20 = res20 + v66;
        v66 = acc67 - v66;
        s.a = s.a + s.b;
        if (res20 > 86) {
        v66 = v66;
        }
    }
}
int main() { test_func(); return 0; }

