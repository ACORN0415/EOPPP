int test_func(void) {
    int v0 = 34;
    int v1 = 95;
    int v2 = 72;
    int v3 = 18;
    int v4 = 37;
    int v5 = 28;
    int v6 = 27;
    int i;
    if (v0 > v1) { v0 = v1; }
    v0 = 76;
    return v0;
}
int main(void) { return test_func(); }
