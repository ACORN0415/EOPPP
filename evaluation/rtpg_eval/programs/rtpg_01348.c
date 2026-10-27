int test_func(void) {
    int v0 = 31;
    int v1 = 65;
    int v2 = 64;
    int v3 = 34;
    int i;
    v0 = v0 - v3;
    v0 = v0 + v0;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
