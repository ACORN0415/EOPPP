int test_func(void) {
    int v0 = 1;
    int v1 = 100;
    int v2 = 28;
    int v3 = 97;
    int v4 = 39;
    int v5 = 80;
    int i;
    v0 = v0 + v4;
    v1 = 72;
    v0 = v0 - v3;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
