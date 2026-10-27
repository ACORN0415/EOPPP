int test_func(void) {
    int v0 = 42;
    int v1 = 95;
    int v2 = 30;
    int v3 = 74;
    int v4 = 96;
    int v5 = 89;
    int i;
    if (v4 > v0) { v4 = v0; }
    for (i = 0; i < 12; i++) {
        v3 = v3 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }
