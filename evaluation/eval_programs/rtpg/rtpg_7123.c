// RTPG_7123: vars=10 stmts=5
int xn[16];
int yo[16];
enum State { ON, OFF, RED };
void test_func(void) {
    int c26 = -42;
    int b23 = 98;
    int v93 = 7;
    int out66 = 91;
    int prev43 = 22;
    int lo31 = 29;
    int cur21 = 35;
    int a32 = 70;
    int cnt49 = 97;
    int cur4 = 18;
    enum State st = ON;
    int *ptr = &out66;
    int i;
    for (i = 0; i < 16; i++) {
        cur4 = xn[i];
        cur4 = cur4 - 3;
        out66 = prev43;
        cur21 = cur21 + 5;
        lo31 = lo31 + cur4;
        out66 = out66 - 4;
        *ptr = *ptr + 1;
        yo[i] = lo31;
    }
}
int main() { test_func(); return 0; }

