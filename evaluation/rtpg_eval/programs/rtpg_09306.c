int test_func(void) {
    int v0 = 77;
    int v1 = 21;
    int v2 = 4;
    int v3 = 95;
    int v4 = 37;
    int i;
    v1 = v1 - v2;
    v1 = 43;
    if (v2 > v1) { v2 = v1; }
    return v0;
}
int main(void) { return test_func(); }
