// RTPG_6239: vars=5 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int c38 = 6;
    int tmp64 = 83;
    int b70 = 0;
    int out10 = 100;
    int cur35 = 11917;
    int *ptr = &b70;
    int h0 = 4;
    int sv0 = 0;
    int h1 = 26478;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        b70 = xn[i];
        cur35 = out10 | c38;
        b70 = cur35 % cur35;
        cur35 = c38 | b70;
        out10 = b70 & cur35;
        cur35 = b70 + c38;
        cur35 = b70 ^ tmp64;
        tmp64 = tmp64 + 1;
        out10 = cur35;
        *ptr = *ptr + 5;
        if (b70 > 60173) goto done;
        yo[i] = c38;
    }
done:
    cur35 = 0;
}
int main() { test_func(); return 0; }

