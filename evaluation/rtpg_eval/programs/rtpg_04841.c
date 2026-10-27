int test_func(void) {
    int v0 = 84;
    int v1 = 28;
    int v2 = 3;
    int v3 = 99;
    int v4 = 73;
    int v5 = 52;
    int i;
    if (v1 > v2) { v1 = v2; }
    v4 = v4 - v1;
    v1 = v1 * 5;
    return v0;
}
int main(void) { return test_func(); }
