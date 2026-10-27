// RTPG_8878: vars=7 stmts=5
int xn[16];
int yo[16];
int idx_arr[16];
enum State { GREEN, SLOW, ON };
void test_func(void) {
    int a81 = 50248;
    int sum53 = -18;
    int prev59 = 1;
    int cur34 = 26688;
    int a10 = 43;
    int out4 = 63;
    int cur39 = 8;
    enum State st = GREEN;
    int i;
    for (i = 0; i < 16; i++) {
        cur39 = xn[i];
        prev59 = xn[idx_arr[i]];
        cur34 = cur34 + 3;
        a10 = a10 + 4;
        a10 = cur39 - 7;
        out4 = a10;
        cur34 = out4 - 4;
        if (cur39 < -14) {
        out4 = out4 - -44;
        }
        yo[i] = a81;
    }
}
int main() { test_func(); return 0; }

