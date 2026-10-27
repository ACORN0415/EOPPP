int test_func(void) {
    int v0 = 23;
    int v1 = 8;
    int v2 = 3;
    int v3 = 85;
    int v4 = 79;
    int v5 = 4;
    int i;
    v0 = v0 - v5;
    v5 = 18;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
