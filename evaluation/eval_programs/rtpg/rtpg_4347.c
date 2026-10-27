// RTPG_4347: vars=4 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int prev72 = 87;
    int v41 = 7;
    int v47 = -10;
    int val24 = -29;
    int *ptr = &prev72;
    int i;
    for (i = 0; i < 32; i++) {
        v47 = xn[i];
        v47 = v47;
        val24 = prev72 - 52035;
        prev72 = v47 - val24;
        v47 = prev72;
        v41 = v41 - 5;
        *ptr = *ptr + 1;
        if (v41 > 16) goto done;
        if (v47 != -26) {
        v41 = v41 - 62437;
        }
        yo[i] = val24;
    }
done:
    v41 = 0;
}
int main() { test_func(); return 0; }

