int test_func(void) {
    int v0 = 49;
    int v1 = 94;
    int v2 = 98;
    int v3 = 1;
    int v4 = 80;
    int i;
    v1 = 93;
    v3 = v3 * 3;
    v0 = v0 - v2;
    if (v2 > v4) { v2 = v4; }
    return v0;
}
int main(void) { return test_func(); }
