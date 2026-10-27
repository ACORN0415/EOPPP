int test_func(void) {
    int v0 = 21;
    int v1 = 64;
    int v2 = 71;
    int v3 = 63;
    int v4 = 14;
    int i;
    v2 = 43;
    v4 = v4 - v2;
    v2 = v2 + v0;
    return v0;
}
int main(void) { return test_func(); }
