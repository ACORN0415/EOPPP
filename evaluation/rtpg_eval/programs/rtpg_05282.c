int test_func(void) {
    int v0 = 67;
    int v1 = 29;
    int v2 = 17;
    int v3 = 40;
    int v4 = 25;
    int v5 = 61;
    int i;
    v0 = v0 + v1;
    if (v1 > v4) { v1 = v4; }
    v1 = v1 - v3;
    return v0;
}
int main(void) { return test_func(); }
