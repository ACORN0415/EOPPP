int test_func(void) {
    int v0 = 17;
    int v1 = 31;
    int v2 = 3;
    int v3 = 39;
    int v4 = 57;
    int v5 = 49;
    int v6 = 24;
    int i;
    v5 = v5 + v1;
    for (i = 0; i < 9; i++) {
        v5 = v5 + v0;
    }
    v5 = 80;
    if (v1 > v5) { v1 = v5; }
    return v0;
}
int main(void) { return test_func(); }
