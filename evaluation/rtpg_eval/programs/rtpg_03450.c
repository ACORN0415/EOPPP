int test_func(void) {
    int v0 = 32;
    int v1 = 77;
    int v2 = 67;
    int v3 = 18;
    int i;
    v1 = 81;
    v3 = v3 + v2;
    return v0;
}
int main(void) { return test_func(); }
