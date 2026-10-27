int test_func(void) {
    int v0 = 1;
    int v1 = 68;
    int v2 = 92;
    int v3 = 9;
    int v4 = 32;
    int v5 = 84;
    int v6 = 43;
    int i;
    v5 = v5 - v2;
    v1 = v1 + v5;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
