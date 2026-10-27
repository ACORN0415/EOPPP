int test_func(void) {
    int v0 = 64;
    int v1 = 75;
    int v2 = 41;
    int v3 = 95;
    int v4 = 91;
    int i;
    v1 = v1 + v2;
    v4 = v4 ^ v1;
    return v0;
}
int main(void) { return test_func(); }
