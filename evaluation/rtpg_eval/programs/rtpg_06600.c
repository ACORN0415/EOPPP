int test_func(void) {
    int v0 = 31;
    int v1 = 21;
    int v2 = 59;
    int v3 = 40;
    int v4 = 41;
    int v5 = 59;
    int v6 = 84;
    int i;
    v5 = v5 * 5;
    v0 = v0 + v5;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
