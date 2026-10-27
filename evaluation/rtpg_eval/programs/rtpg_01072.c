int test_func(void) {
    int v0 = 19;
    int v1 = 91;
    int v2 = 85;
    int v3 = 74;
    int v4 = 38;
    int i;
    v3 = v3 + v0;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
