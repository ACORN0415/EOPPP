// RTPG_1802: vars=21 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int v81 = -46;
    int a80 = 60423;
    int a2 = 9;
    int cur46 = 39;
    int x96 = 9;
    int z67 = 78;
    int hi21 = 23410;
    int v98 = -40;
    int y58 = 38;
    int out47 = 33130;
    int out52 = -44;
    int z68 = 20;
    int a22 = 15638;
    int lo27 = -36;
    int dat77 = 2;
    int v12 = 78;
    int lo70 = -4;
    int y79 = 7;
    int lo65 = 43;
    int dat73 = 35350;
    int a1 = 36112;
    int *ptr = &a1;
    int i;
    for (i = 0; i < 16; i++) {
        a1 = xn[i];
        y58 = z67;
        x96 = z68;
        v81 = a80;
        hi21 = z68 + 9;
        cur46 = y58;
        lo70 = a2;
        y58 = y58 + 2;
        *ptr = *ptr + 2;
        if (lo27 == -45) {
        out52 = lo70 + hi21;
        }
        yo[i] = out52;
    }
done:
    v98 = 0;
}
int main() { test_func(); return 0; }

