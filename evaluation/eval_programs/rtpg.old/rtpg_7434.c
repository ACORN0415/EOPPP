// RTPG_7434: vars=4 stmts=10
int xn[64];
int yo[64];
void test_func(void) {
    int val41 = 23526;
    int res91 = -14;
    int z2 = 56674;
    int sum51 = 8;
    int i;
    for (i = 0; i < 64; i++) {
        res91 = xn[i];
        sum51 = z2 - 4;
        val41 = sum51 - res91;
        res91 = res91 - 56879;
        res91 = res91 + 3;
        val41 = z2 + 6;
        res91 = z2 - val41;
        val41 = val41 + 4;
        val41 = val41 + sum51;
        z2 = res91;
        z2 = val41 + sum51;
        yo[i] = res91;
    }
}
int main() { test_func(); return 0; }

