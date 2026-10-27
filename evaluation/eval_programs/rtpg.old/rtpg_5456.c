// RTPG_5456: vars=4 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int y74 = 59526;
    int tmp19 = 74;
    int a82 = 9;
    int tmp22 = 44;
    int *ptr = &y74;
    int i;
    for (i = 0; i < 32; i++) {
        tmp22 = xn[i];
        y74 = tmp22 - 4;
        y74 = a82;
        a82 = a82 - 5;
        tmp19 = tmp22 + y74;
        *ptr = *ptr + 4;
        if (tmp19 != 24) {
        tmp22 = a82;
        }
        yo[i] = a82;
    }
done:
    y74 = 0;
}
int main() { test_func(); return 0; }

