int test_func(void) {
    int v0 = 76;
    int v1 = 73;
    int v2 = 37;
    int v3 = 71;
    int v4 = 27;
    int i;
    for (i = 0; i < 14; i++) {
        v1 = v1 + v4;
    }
    v2 = 28;
    if (v2 > v1) { v2 = v1; }
    return v0;
}
int main(void) { return test_func(); }
