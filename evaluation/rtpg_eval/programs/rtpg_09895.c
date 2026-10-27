int test_func(void) {
    int v0 = 58;
    int v1 = 14;
    int v2 = 75;
    int v3 = 14;
    int i;
    v0 = v0 - v1;
    v1 = v1 & v2;
    return v0;
}
int main(void) { return test_func(); }
