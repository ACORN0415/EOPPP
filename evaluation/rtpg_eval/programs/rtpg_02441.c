int test_func(void) {
    int v0 = 13;
    int v1 = 40;
    int v2 = 68;
    int v3 = 33;
    int v4 = 50;
    int v5 = 22;
    int i;
    if (v1 > v3) { v1 = v3; }
    for (i = 0; i < 7; i++) {
        v4 = v4 + v1;
    }
    v0 = 15;
    return v0;
}
int main(void) { return test_func(); }
