int test_func(void) {
    int v0 = 80;
    int v1 = 41;
    int v2 = 7;
    int v3 = 34;
    int v4 = 33;
    int i;
    v1 = v1 - v4;
    v0 = v0 + v4;
    if (v0 > v3) { v0 = v3; }
    return v0;
}
int main(void) { return test_func(); }
