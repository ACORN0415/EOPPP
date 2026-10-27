// RTPG_3856: vars=3 stmts=11
int xn[64];
int yo[64];
void test_func(void) {
    int cur44 = 67;
    int tmp61 = 2;
    int c19 = -23;
    int i;
    for (i = 0; i < 64; i++) {
        c19 = xn[i];
        tmp61 = tmp61 - 3;
        cur44 = tmp61 + c19;
        cur44 = c19 + tmp61;
        cur44 = cur44 + 3;
        tmp61 = cur44 - 36144;
        c19 = c19 + tmp61;
        tmp61 = tmp61 - 1;
        tmp61 = tmp61 + 14;
        tmp61 = cur44 + 55;
        cur44 = tmp61 + cur44;
        cur44 = tmp61 - c19;
        if (tmp61 >= 76) {
        tmp61 = tmp61 + c19;
        }
        yo[i] = c19;
    }
}
int main() { test_func(); return 0; }

