int test_func(void) {
    int v0 = 91;
    int v1 = 20;
    int v2 = 40;
    int v3 = 5;
    int v4 = 36;
    int v5 = 85;
    int i;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v4 = v4 ^ v0;
    return v0;
}
int main(void) { return test_func(); }
