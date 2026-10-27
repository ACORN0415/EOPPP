// RTPG_8121: vars=3 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int sum32 = 83;
    int cur35 = 5;
    int z45 = 20177;
    int i;
    for (i = 0; i < 64; i++) {
        sum32 = xn[i];
        z45 = z45;
        sum32 = sum32 + 5;
        z45 = sum32 + z45;
        sum32 = sum32 - z45;
        z45 = cur35 - 10;
        if (cur35 < -35) {
        cur35 = cur35 + 2;
        }
        yo[i] = z45;
    }
}
int main() { test_func(); return 0; }

