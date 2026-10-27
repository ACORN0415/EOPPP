// RTPG_4939: vars=5 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int prev40 = 37174;
    int cnt2 = -25;
    int acc42 = 2;
    int val36 = 4;
    int v82 = -44;
    int *ptr = &acc42;
    int i;
    for (i = 0; i < 32; i++) {
        acc42 = xn[i];
        cnt2 = cnt2 - 1;
        prev40 = cnt2 - 51;
        v82 = val36 + cnt2;
        v82 = acc42;
        v82 = v82 - 1;
        cnt2 = cnt2 - prev40;
        acc42 = v82 - prev40;
        v82 = cnt2 + 56839;
        *ptr = *ptr + 5;
        if (acc42 >= -15) {
        acc42 = cnt2;
        }
        yo[i] = cnt2;
    }
}
int main() { test_func(); return 0; }

