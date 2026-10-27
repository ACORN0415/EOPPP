int test_func(void) {
    int v0 = 43;
    int v1 = 45;
    int v2 = 97;
    int v3 = 89;
    int i;
    if (v3 > v2) { v3 = v2; }
    for (i = 0; i < 5; i++) {
        v0 = v0 + v0;
    }
    v1 = v1 * 8;
    return v0;
}
int main(void) { return test_func(); }
