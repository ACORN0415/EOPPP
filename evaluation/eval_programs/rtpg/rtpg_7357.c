// RTPG_7357: vars=4 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int v81 = 28;
    int x63 = 5;
    int c85 = -45;
    int acc33 = -4;
    int i;
    for (i = 0; i < 32; i++) {
        v81 = xn[i];
        v81 = v81 - acc33;
        v81 = v81 - acc33;
        x63 = x63 + 4;
        x63 = acc33 - c85;
        c85 = x63 + acc33;
        if (v81 > 20) goto done;
        if (acc33 != 64) {
        x63 = c85;
        }
        yo[i] = v81;
    }
done:
    acc33 = 0;
}
int main() { test_func(); return 0; }

