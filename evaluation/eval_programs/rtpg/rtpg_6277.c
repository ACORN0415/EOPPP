// RTPG_6277: vars=4 stmts=4
void test_func(void) {
    int dat85 = 97;
    int dat8 = 54610;
    int z4 = 52;
    int sum27 = 35912;
    int *ptr = &dat8;
    int i;
    for (i = 0; i < 17; i++) {
        dat85 = dat85 + 1;
        sum27 = sum27 - 3;
        dat8 = dat8 - 39029;
        z4 = sum27 - sum27;
        *ptr = *ptr + 4;
        if (sum27 > 15) goto done;
    }
done:
    dat8 = 0;
}
int main() { test_func(); return 0; }

