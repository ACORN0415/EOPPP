// RTPG_5328: vars=8 stmts=5
void test_func(void) {
    int cnt65 = 35;
    int lo92 = -13;
    int tmp64 = 19;
    int prev64 = -10;
    int v81 = 14647;
    int z40 = 77;
    int hi48 = 5;
    int tmp35 = -40;
    int i;
    for (i = 0; i < 25; i++) {
        v81 = tmp35;
        tmp64 = cnt65 + 0;
        tmp35 = tmp35 + v81;
        z40 = z40 - hi48;
        prev64 = v81 - lo92;
        if (tmp35 > 13095) goto done;
    }
done:
    z40 = 0;
}
int main() { test_func(); return 0; }

