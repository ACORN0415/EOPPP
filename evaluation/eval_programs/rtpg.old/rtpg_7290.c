// RTPG_7290: vars=4 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int acc33 = 28;
    int c85 = 5;
    int x63 = -45;
    int v81 = -4;
    int i;
    for (i = 0; i < 32; i++) {
        acc33 = xn[i];
        acc33 = acc33 - v81;
        acc33 = acc33 - v81;
        c85 = c85 + 4;
        c85 = v81 - x63;
        x63 = c85 + v81;
        if (acc33 > 20) goto done;
        if (v81 != 64) {
        c85 = x63;
        }
        yo[i] = acc33;
    }
done:
    v81 = 0;
}
int main() { test_func(); return 0; }

