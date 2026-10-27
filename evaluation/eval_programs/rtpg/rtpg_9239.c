// RTPG_9239: vars=10 stmts=6
int xn[32];
int yo[32];
int idx_arr[32];
struct Point { int a; int b; };
void test_func(void) {
    int y61 = 60;
    int res43 = 1;
    int tmp98 = 85;
    int tmp61 = 8;
    int a39 = 7;
    int dat37 = 32;
    int a0 = 2;
    int hi21 = 4;
    int prev30 = -7;
    int c80 = 10;
    struct Point s; s.a = 46; s.b = 9;
    int i;
    for (i = 0; i < 32; i++) {
        y61 = xn[i];
        tmp61 = xn[idx_arr[i]];
        a0 = a0 + 5;
        a39 = a0 - res43;
        tmp61 = a0 - c80;
        a39 = tmp98 - y61;
        hi21 = hi21 + 3;
        tmp61 = tmp98;
        s.a = s.a + s.b;
        if (hi21 >= 56) {
        a39 = res43 + 25188;
        }
        yo[i] = hi21;
    }
}
int main() { test_func(); return 0; }

