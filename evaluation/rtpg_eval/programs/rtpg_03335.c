int test_func(void) {
    int v0 = 35;
    int v1 = 1;
    int v2 = 34;
    int v3 = 69;
    int v4 = 35;
    int v5 = 89;
    int i;
    if (v1 > v3) { v1 = v3; }
    v2 = 5;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v4;
    }
    v1 = v1 * 10;
    return v0;
}
int main(void) { return test_func(); }
