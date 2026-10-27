int test_func(void) {
    int v0 = 55;
    int v1 = 58;
    int v2 = 22;
    int v3 = 5;
    int v4 = 73;
    int i;
    v4 = v4 - v2;
    v4 = v4 + v2;
    if (v0 > v4) { v0 = v4; }
    return v0;
}
int main(void) { return test_func(); }
