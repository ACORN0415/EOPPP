int test_func(void) {
    int v0 = 96;
    int v1 = 93;
    int v2 = 78;
    int v3 = 37;
    int v4 = 26;
    int v5 = 50;
    int v6 = 50;
    int i;
    v6 = v6 - v4;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
