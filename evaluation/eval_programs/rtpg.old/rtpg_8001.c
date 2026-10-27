// RTPG_8001: vars=3 stmts=6
int idx_arr[64];
void test_func(void) {
    int tmp65 = -49;
    int cnt59 = 33;
    int res91 = 0;
    int i;
    for (i = 0; i < 58; i++) {
        cnt59 = xn[idx_arr[i]];
        cnt59 = tmp65;
        cnt59 = tmp65 + tmp65;
        tmp65 = res91 - cnt59;
        res91 = res91 + tmp65;
        tmp65 = cnt59;
        tmp65 = tmp65 - 4;
        if (res91 > 50) goto done;
    }
done:
    res91 = 0;
}
int main() { test_func(); return 0; }

