int test_func(void) {
    int v0 = 95;
    int v1 = 21;
    int v2 = 19;
    int v3 = 87;
    int i;
    if (v3 > v2) { v3 = v2; }
    v1 = v1 + v3;
    return v0;
}
int main(void) { return test_func(); }
