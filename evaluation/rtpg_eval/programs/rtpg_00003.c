int test_func(void) {
    int v0 = 22;
    int v1 = 69;
    int v2 = 37;
    int v3 = 98;
    int v4 = 100;
    int v5 = 47;
    int v6 = 60;
    int i;
    v1 = 49;
    v6 = v6 * 2;
    v2 = v2 - v6;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
