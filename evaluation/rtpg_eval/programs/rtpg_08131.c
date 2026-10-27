int test_func(void) {
    int v0 = 9;
    int v1 = 56;
    int v2 = 80;
    int v3 = 67;
    int v4 = 14;
    int v5 = 55;
    int i;
    v0 = 56;
    v4 = v4 & v5;
    return v0;
}
int main(void) { return test_func(); }
