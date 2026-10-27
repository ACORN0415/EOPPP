int test_func(void) {
    int v0 = 37;
    int v1 = 84;
    int v2 = 1;
    int v3 = 59;
    int v4 = 23;
    int v5 = 96;
    int v6 = 96;
    int v7 = 71;
    int i;
    v1 = v1 - v0;
    v0 = v0 + v4;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
