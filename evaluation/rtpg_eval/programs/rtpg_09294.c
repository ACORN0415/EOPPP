int test_func(void) {
    int v0 = 49;
    int v1 = 35;
    int v2 = 73;
    int v3 = 96;
    int v4 = 96;
    int i;
    if (v1 > v4) { v1 = v4; }
    v3 = v3 + v0;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
