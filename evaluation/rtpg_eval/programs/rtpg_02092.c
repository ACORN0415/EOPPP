int test_func(void) {
    int v0 = 43;
    int v1 = 39;
    int v2 = 29;
    int v3 = 14;
    int v4 = 22;
    int v5 = 43;
    int i;
    for (i = 0; i < 5; i++) {
        v1 = v1 + v3;
    }
    v5 = 25;
    if (v1 > v3) { v1 = v3; }
    return v0;
}
int main(void) { return test_func(); }
