int test_func(void) {
    int v0 = 23;
    int v1 = 64;
    int v2 = 87;
    int v3 = 12;
    int i;
    v1 = v1 + v3;
    v3 = v3 - v0;
    return v0;
}
int main(void) { return test_func(); }
