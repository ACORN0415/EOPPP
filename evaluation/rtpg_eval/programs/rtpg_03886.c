int test_func(void) {
    int v0 = 65;
    int v1 = 91;
    int v2 = 78;
    int v3 = 19;
    int v4 = 78;
    int v5 = 22;
    int i;
    if (v3 > v4) { v3 = v4; }
    v3 = 23;
    return v0;
}
int main(void) { return test_func(); }
