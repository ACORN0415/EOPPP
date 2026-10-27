int test_func(void) {
    int v0 = 20;
    int v1 = 56;
    int v2 = 19;
    int v3 = 60;
    int v4 = 100;
    int v5 = 4;
    int v6 = 16;
    int v7 = 21;
    int i;
    if (v5 > v0) { v5 = v0; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
