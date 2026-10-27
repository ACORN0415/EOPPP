int test_func(void) {
    int v0 = 80;
    int v1 = 87;
    int v2 = 60;
    int v3 = 2;
    int v4 = 5;
    int v5 = 93;
    int v6 = 71;
    int v7 = 89;
    int i;
    v7 = 74;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v0;
    }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
